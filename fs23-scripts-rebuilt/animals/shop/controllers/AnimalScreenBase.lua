-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalScreenBase = {ACTION_TYPE_NONE = 0, ACTION_TYPE_SOURCE = 1, ACTION_TYPE_TARGET = 2}
local AnimalScreenBase_mt = Class(AnimalScreenBase)
function AnimalScreenBase.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.sourceItems = {}
  v1.targetItems = {}
  v1.sourceActionText = ""
  v1.targetActionText = ""
  v1.sourceTitle = ""
  v1.targetTitle = ""
  return v1
end
function AnimalScreenBase.reset(v0)
  v1:unsubscribe(AnimalClusterUpdateEvent, v0)
end
function AnimalScreenBase:init()
  v1:subscribe(AnimalClusterUpdateEvent, self.onAnimalsChanged, self)
  self:initItems()
end
function AnimalScreenBase:initItems()
  self:initSourceItems()
  self:initTargetItems()
end
function AnimalScreenBase.initSourceItems(v0)
end
function AnimalScreenBase.initTargetItems(v0)
end
function AnimalScreenBase:getSourceItems()
  return self.sourceItems
end
function AnimalScreenBase:getTargetItems()
  return self.targetItems
end
function AnimalScreenBase:setAnimalsChangedCallback(callback, target)
  self.animalsChangedCallback = function()
    u0(u1)
  end
end
function AnimalScreenBase:setActionTypeCallback(callback, target)
  self.actionTypeCallback = function(self)
    u0(u1, self)
  end
end
function AnimalScreenBase:setErrorCallback(callback, target)
  self.errorCallback = function(self)
    u0(u1, self)
  end
end
function AnimalScreenBase:setSourceActionFinishedCallback(callback, target)
  self.sourceActionFinished = function(self, callback)
    u0(u1, self, callback)
  end
end
function AnimalScreenBase:setTargetActionFinishedCallback(callback, target)
  self.targetActionFinished = function(self, callback)
    u0(u1, self, callback)
  end
end
function AnimalScreenBase.onAnimalsChanged(v0)
end
function AnimalScreenBase.onAnimalBuyError(v0, v1)
end
function AnimalScreenBase.getMaxNumAnimals(v0)
  return 60
end
function AnimalScreenBase:getSourceActionText()
  return self.sourceActionText
end
function AnimalScreenBase:getTargetActionText()
  return self.targetActionText
end
function AnimalScreenBase:getSourceName()
  return self.sourceTitle
end
function AnimalScreenBase:getTargetName()
  return self.targetTitle
end
function AnimalScreenBase.getSourceMaxNumAnimals(v0, v1)
  return 0
end
function AnimalScreenBase.getTargetMaxNumAnimals(v0, v1)
  return 0
end
