-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

IKChains = {}
function IKChains.prerequisitesPresent(v0)
  return true
end
function IKChains.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("IKChains")
  IKUtil.registerIKChainXMLPaths(Vehicle.xmlSchema, "vehicle.ikChains.ikChain(?)")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function IKChains.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoad", IKChains)
  SpecializationUtil.registerEventListener(v0, "onUpdate", IKChains)
end
function IKChains:onLoad(v1)
  self.spec_ikChains.chains = {}
  while true do
    v4 = string.format("vehicle.ikChains.ikChain(%d)", v3)
    v5 = v5:hasProperty(v4)
    if not v5 then
      break
    end
    IKUtil.loadIKChain(self.xmlFile, v4, self.components, self.components, v2.chains, self.getParentComponent, self)
  end
  IKUtil.updateAlignNodes(v2.chains, self.getParentComponent, self, nil)
  v4 = next(v2.chains)
  if v4 == nil then
    SpecializationUtil.removeEventListener(self, "onUpdate", IKChains)
  end
end
function IKChains:onUpdate(v1, v2, v3, v4)
  IKUtil.updateIKChains(self.spec_ikChains.chains)
end
