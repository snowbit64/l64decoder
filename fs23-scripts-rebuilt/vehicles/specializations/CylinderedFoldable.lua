-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CylinderedFoldable = {}
function CylinderedFoldable.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(Cylindered, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(Foldable, v0)
  end
  return v1
end
function CylinderedFoldable.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("CylinderedFoldable")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.cylindered#loadMovingToolStatesAfterFolding", "Load moving tool states after folding state was loaded", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.cylindered#loadMovingToolStatesFoldTime", "Fold time in which moving tool states should be loaded")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function CylinderedFoldable.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoad", CylinderedFoldable)
  SpecializationUtil.registerEventListener(v0, "onPostLoad", CylinderedFoldable)
  SpecializationUtil.registerEventListener(v0, "onReadStream", CylinderedFoldable)
  SpecializationUtil.registerEventListener(v0, "onWriteStream", CylinderedFoldable)
end
function CylinderedFoldable:onLoad(v1)
  local v3 = v3:getValue("vehicle.cylindered#loadMovingToolStatesAfterFolding", false)
  self.spec_cylinderedFoldable.loadMovingToolStatesAfterFolding = v3
  v3 = v3:getValue("vehicle.cylindered#loadMovingToolStatesFoldTime")
  self.spec_cylinderedFoldable.loadMovingToolStatesFoldTime = v3
end
function CylinderedFoldable:onPostLoad(v1)
  if self.spec_cylinderedFoldable.loadMovingToolStatesAfterFolding then
    if self.spec_cylinderedFoldable.loadMovingToolStatesFoldTime ~= nil then
      local v4 = self:getFoldAnimTime()
      -- if v4 ~= v0.spec_cylinderedFoldable.loadMovingToolStatesFoldTime then goto L19 end
    end
    Cylindered.onPostLoad(self, v1)
  end
end
function CylinderedFoldable:onReadStream(v1, v2)
  AnimatedVehicle.updateAnimations(self, 9999999)
  local v3 = streamReadBool(v1)
  if v3 then
    Cylindered.onReadStream(self, v1, v2)
  end
  v3 = v2:getIsServer()
  if v3 then
    -- TODO: structure LOP_FORNPREP (pc 27, target 43)
    if self.spec_cylindered.movingTools[1].dirtyFlag ~= nil then
      self:updateDependentAnimations(self.spec_cylindered.movingTools[1], 9999)
    end
    -- TODO: structure LOP_FORNLOOP (pc 42, target 28)
  end
end
function CylinderedFoldable:onWriteStream(v1, v2)
  if self.spec_cylinderedFoldable.loadMovingToolStatesFoldTime ~= nil then
    local v7 = self:getFoldAnimTime()
    if v7 ~= self.spec_cylinderedFoldable.loadMovingToolStatesFoldTime then
    end
  end
  local v4 = v4(v5, v6)
  if v4 then
    Cylindered.onWriteStream(self, v1, v2)
  end
end
