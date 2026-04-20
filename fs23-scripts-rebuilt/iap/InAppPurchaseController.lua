-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InAppPurchaseController = {}
local InAppPurchaseController_mt = Class(InAppPurchaseController)
InAppPurchaseController.PENDING_DELAY = 1000
function InAppPurchaseController.new()
  local v0 = setmetatable({}, u0)
  v0.isLoaded = false
  v0.isInitialized = false
  v0.callbacks = {}
  v0.pendingTimer = InAppPurchaseController.PENDING_DELAY
  v0.lastNumOfPendingPurchases = 0
  v0.ignoreNextPendingPurchaseChange = false
  v0.pendingProductsToRestore = {}
  v0.xmlPath = "dataS/inAppProducts.xml"
  return v0
end
function InAppPurchaseController:load()
  if not self.isLoaded then
    self:loadProductsFromXML()
    if inAppInit ~= nil then
      inAppInit(self.xmlPath)
    end
    self.isLoaded = true
  end
end
function InAppPurchaseController:loadProductsFromXML()
  self.products = {}
  self.productIdToProduct = {}
  local v1 = XMLFile.load("products", self.xmlPath)
  if v1 ~= nil then
    v1:iterate("inAppPurchases.inAppPurchase", function(self, v1)
      local v2 = v2:getInt(v1 .. "#productId")
      if v2 == nil then
        Logging.xmlWarning(u0, "Failed to load IAP Product. Missing productId. (%s)", v1)
        return
      end
      local v3 = v3:getBool(v1 .. "#isConsumable", true)
      local v4 = v4:getString(v1 .. ".product#className")
      local v5 = ClassUtil.getClassObject(v4)
      if v5 ~= nil then
        local v6 = v5.new(v2, v3)
        -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L73
        local v7 = v6:loadFromXMLFile(u0, v1 .. ".product")
        -- if not v7 then goto L73 end
        table.insert(u1.products, v6)
        u1.productIdToProduct[v2] = v6
        return
      end
      Logging.xmlWarning(u0, "Failed to load IAP Product. Missing product class '%s'. (%s)", v4, v1)
    end)
    v1:delete()
  end
end
function InAppPurchaseController:setMission(mission)
  self.mission = mission
end
function InAppPurchaseController:getIsAvailable()
  if not self.isInitialized then
    if inAppIsLoaded ~= nil then
      local v1 = inAppIsLoaded()
      if v1 then
        self.isInitialized = true
        return true
      end
    end
    return false
  end
  return true
end
function InAppPurchaseController:getProducts()
  return self.products
end
function InAppPurchaseController:getProductById(v1)
  -- TODO: structure LOP_FORNPREP (pc 5, target 16)
  local v6 = self.products[1]:getId()
  if v6 == v1 then
    return self.products[1]
  end
  -- TODO: structure LOP_FORNLOOP (pc 15, target 6)
end
function InAppPurchaseController:purchase(product, callback)
  if product ~= nil and callback == nil then
  end
  assert(v4)
  if self.mission ~= nil then
    self.callbacks[product] = callback
    local v4 = product:getId()
    inAppStartPurchase(v4, "onPurchaseEnd", self)
  end
end
function InAppPurchaseController:onPurchaseEnd(error, productId)
  if error == InAppPurchase.ERROR_OK then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L32
    self.productIdToProduct[productId]:onProductBought(function(self, error)
      if self then
        inAppFinishPurchase(u0)
        u1.callbacks[u2](true, false, u3)
        productId:onPendingPurchasesChanged(0)
        return
      end
      u1.callbacks[u2](false, true, InAppPurchase.ERROR_FAILED)
      u1.ignoreNextPendingPurchaseChange = true
    end)
    return
  end
  if error ~= InAppPurchase.ERROR_CANCELLED then
  end
  v4(v5, true, error)
end
function InAppPurchaseController.getHasPendingPurchase(v0, v1)
  local v2 = inAppGetNumPendingPurchases()
  local v3 = v1:getId()
  -- TODO: structure LOP_FORNPREP (pc 9, target 19)
  local v7 = inAppGetPendingPurchaseProductId(0)
  if v7 == v3 then
    return true
  end
  -- TODO: structure LOP_FORNLOOP (pc 18, target 10)
  return false
end
function InAppPurchaseController.getHasAnyPendingPurchases(v0)
  local v2 = inAppGetNumPendingPurchases()
  if 0 >= v2 then
  end
  return true
end
function InAppPurchaseController:checkPendingPurchasesChanged()
  self.pendingTimer = InAppPurchaseController.PENDING_DELAY
  local num = inAppGetNumPendingPurchases()
  if num ~= self.lastNumOfPendingPurchases then
    if not self.ignoreNextPendingPurchaseChange then
      self:onPendingPurchasesChanged(num - self.lastNumOfPendingPurchases)
    else
      self.ignoreNextPendingPurchaseChange = false
    end
    self.lastNumOfPendingPurchases = num
  end
end
function InAppPurchaseController:onPendingPurchasesChanged(v1)
  if self.pendingPurchaseCallback ~= nil then
    self.pendingPurchaseCallback()
  end
  if 0 < v1 then
    local v2 = inAppGetNumPendingPurchases()
    if 0 < v2 then
      self.pendingProductsToRestore = {}
      -- TODO: structure LOP_FORNPREP (pc 23, target 43)
      local v6 = inAppGetPendingPurchaseProductId(v2 - v1)
      local v7 = self:getProductById(v6)
      if v7 ~= nil then
        table.insert(self.pendingProductsToRestore, v7)
      end
      -- TODO: structure LOP_FORNLOOP (pc 42, target 24)
      function()
        if 0 < #u0.pendingProductsToRestore then
          local v3 = v3:getText("ui_iap_pendingPurchaseFound")
          local v4 = u0.pendingProductsToRestore[1]:getTitle()
          local v2 = string.format(...)
          YesNoDialog.show(function(self, v1)
            if v1 then
              v2:tryPerformPendingPurchase(u1, function(self, v1)
                if self then
                else
                end
                local v2 = v2:getText(v4)
                if v1 ~= nil then
                end
                InfoDialog.show(v2, function()
                  u0()
                end)
              end)
              return
            end
            u2()
          end, u0, v2)
          table.remove(u0.pendingProductsToRestore, 1)
        end
      end()
    end
  end
end
function InAppPurchaseController:setPendingPurchaseCallback(callback)
  self.pendingPurchaseCallback = callback
end
function InAppPurchaseController.tryPerformPendingPurchase(v0, v1, v2)
  if v1 ~= nil and v2 == nil then
  end
  assert(v4)
  local v3 = inAppGetNumPendingPurchases()
  local v4 = v1:getId()
  -- TODO: structure LOP_FORNPREP (pc 20, target 36)
  local v8 = inAppGetPendingPurchaseProductId(0)
  if v8 == v4 then
    v1:onProductBought(function(v0, v1)
      u0(v0, v1)
      if v0 then
        inAppFinishPendingPurchase(u1)
      end
    end)
    return true
  end
  -- TODO: structure LOP_FORNLOOP (pc 35, target 21)
  return false
end
function InAppPurchaseController.getHasPurchasesToRestore(v0)
  if inAppHasRestorePurchases ~= nil then
    local v1 = inAppHasRestorePurchases()
  end
  return v1
end
function InAppPurchaseController.restorePurchases(v0)
  inAppRestorePurchases("onPurchasesRestored", v0)
end
function InAppPurchaseController:onPurchasesRestored(v1)
  if v1 == InAppPurchaseResponse.OK then
    local v3 = v3:getText("ui_iap_purchaseRestoreCompleted")
    InfoDialog.show(v3, nil, nil, DialogElement.TYPE_INFO)
  elseif v1 == InAppPurchaseResponse.PURCHASE_IN_PROGRESS then
    v3 = v3:getText("ui_iap_purchaseInProgress")
    InfoDialog.show(v3, nil, nil, DialogElement.TYPE_INFO)
  else
    v3 = v3:getText("ui_iap_purchaseRestoreFailed")
    InfoDialog.show(v3, nil, nil, DialogElement.TYPE_WARNING)
  end
  for v5, v6 in pairs(InAppPurchaseResponse) do
    if not (v6 == v1) then
      continue
    end
    Logging.devInfo("Restored In-app purchases (%s):", v5)
  end
  -- TODO: structure LOP_FORNPREP (pc 69, target 91)
  local v8 = self.products[1]:getId()
  local v9 = self.products[1]:getTitle()
  local v11 = self.products[1]:getHasBeenBought()
  if v11 then
  else
  end
  v6(v7, v8, v9, v10)
  -- TODO: structure LOP_FORNLOOP (pc 90, target 70)
end
function InAppPurchaseController:update(dt)
  if self.isLoaded and self.isInitialized then
    self.pendingTimer = self.pendingTimer - dt
    if self.pendingTimer < 0 then
      self:checkPendingPurchasesChanged()
    end
  end
end
