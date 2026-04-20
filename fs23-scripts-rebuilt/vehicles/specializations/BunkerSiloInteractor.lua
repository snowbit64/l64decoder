-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BunkerSiloInteractor = {}
function BunkerSiloInteractor.prerequisitesPresent(v0)
  return true
end
function BunkerSiloInteractor.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "setBunkerSiloInteractorCallback", BunkerSiloInteractor.setBunkerSiloInteractorCallback)
  SpecializationUtil.registerFunction(vehicleType, "notifiyBunkerSilo", BunkerSiloInteractor.notifiyBunkerSilo)
end
function BunkerSiloInteractor.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", BunkerSiloInteractor)
end
function BunkerSiloInteractor:onLoad(savegame)
  self.spec_bunkerSiloInteractor.callback = nil
  self.spec_bunkerSiloInteractor.callbackTarget = nil
end
function BunkerSiloInteractor:setBunkerSiloInteractorCallback(callback, callbackTarget)
  self.spec_bunkerSiloInteractor.callback = callback
  self.spec_bunkerSiloInteractor.callbackTarget = callbackTarget
end
function BunkerSiloInteractor:notifiyBunkerSilo(changedFillLevel, fillType, x, y, z)
  if self.spec_bunkerSiloInteractor.callback ~= nil then
    self.spec_bunkerSiloInteractor.callback(self.spec_bunkerSiloInteractor.callbackTarget, self, changedFillLevel, fillType, x, y, z)
  end
end
