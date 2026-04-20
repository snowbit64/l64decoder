-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

IAPSimulator = {IS_LOADED = false, CURRENT_PURCHASE = nil, PRODUCTS = {}, PENDING_PURCHASES = {}}
function IAPSimulator.init()
  function keyEvent(unicode, sym, modifier, isDown)
    if isDown then
      if sym == Input.KEY_1 then
        Logging.devInfo("IAPSimulator: Finishing IAP with FAILED...")
        IAPSimulator.handleNextPurchase(InAppPurchase.ERROR_FAILED)
      elseif sym == Input.KEY_2 then
        Logging.devInfo("IAPSimulator: Finishing IAP with CANCELLED...")
        IAPSimulator.handleNextPurchase(InAppPurchase.ERROR_CANCELLED)
      else
        if sym == Input.KEY_3 then
          Logging.devInfo("IAPSimulator: Finishing IAP with IN PROGRESS...")
          IAPSimulator.handleNextPurchase(InAppPurchase.ERROR_PURCHASE_IN_PROGRESS)
        elseif sym == Input.KEY_4 then
          Logging.devInfo("IAPSimulator: Finishing IAP with OK...")
          IAPSimulator.handleNextPurchase(InAppPurchase.ERROR_OK)
        else
          if sym == Input.KEY_5 then
            Logging.devInfo("IAPSimulator: Finishing IAP with NETWORK_UNAVAILABLE...")
            IAPSimulator.handleNextPurchase(InAppPurchase.ERROR_NETWORK_UNAVAILABLE)
          elseif sym == Input.KEY_6 then
            Logging.devInfo("IAPSimulator: Adding pending IAP...")
            IAPSimulator.addPendingPurchase()
          end
        end
      end
    end
    u0(unicode, sym, modifier, isDown)
  end
  function inAppInit(xmlFileName)
    local xmlFile = loadXMLFile("IAPProducts", xmlFileName)
    if xmlFile ~= 0 then
      while true do
        isDown = string.format("inAppPurchases.inAppPurchase(%d)", modifier)
        v4 = hasXMLProperty(xmlFile, isDown)
        if not v4 then
          break
        end
        v4 = getXMLInt(xmlFile, isDown .. "#productId")
        if v4 ~= nil then
          v5 = getXMLInt(xmlFile, isDown .. "#coins")
          v6 = getXMLString(xmlFile, isDown .. "#imageFilename")
          IAPSimulator.PRODUCTS[v4] = {productId = v4, coins = v5, imageFilename = v6}
        end
      end
      delete(xmlFile)
    end
    IAPSimulator.IS_LOADED = true
  end
  function inAppIsLoaded()
    return IAPSimulator.IS_LOADED
  end
  function inAppGetProductPrice(productId)
    if IAPSimulator.PRODUCTS[productId] ~= nil then
      return "$ " .. productId .. ".00"
    end
    return nil
  end
  function inAppGetProductDescription(productId)
    if IAPSimulator.PRODUCTS[productId] ~= nil then
      return "Product description " .. productId
    end
    return nil
  end
  function inAppStartPurchase(productId, callbackName, target)
    if IAPSimulator.CURRENT_PURCHASE ~= nil then
      target[callbackName](target, InAppPurchase.ERROR_PURCHASE_IN_PROGRESS, productId)
      return
    end
    IAPSimulator.CURRENT_PURCHASE = {productId = productId, target = target, callbackName = callbackName}
  end
  function inAppFinishPurchase(productId)
    IAPSimulator.CURRENT_PURCHASE = nil
  end
  function inAppGetNumPendingPurchases()
    return #IAPSimulator.PENDING_PURCHASES
  end
  function inAppGetPendingPurchaseProductId(pendingIndex)
    return IAPSimulator.PENDING_PURCHASES[pendingIndex + 1].productId
  end
  function inAppFinishPendingPurchase(pendingIndex)
    table.remove(IAPSimulator.PENDING_PURCHASES, pendingIndex + 1)
  end
  print("\n\n  ##################   Warning: IAP Simulator active!   ##################\n\n")
end
function IAPSimulator.handleNextPurchase(err)
  if IAPSimulator.CURRENT_PURCHASE == nil then
    Logging.devInfo("IAPSimulator: No purchase active!")
    return
  end
  IAPSimulator.CURRENT_PURCHASE = nil
  sym.target[sym.callbackName](sym.target, err, sym.productId)
end
function IAPSimulator.addPendingPurchase()
  local modifier = math.random(1, #IAPSimulator.PRODUCTS)
  table.insert(IAPSimulator.PENDING_PURCHASES, {productId = modifier - 1})
end
