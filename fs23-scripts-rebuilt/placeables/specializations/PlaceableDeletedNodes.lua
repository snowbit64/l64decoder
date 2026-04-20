-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableDeletedNodes = {}
function PlaceableDeletedNodes.prerequisitesPresent(v0)
  return true
end
function PlaceableDeletedNodes.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoadFinished", PlaceableDeletedNodes)
end
function PlaceableDeletedNodes:registerXMLPaths(v1)
  self:setXMLSpecializationType("DeletedNodes")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".deletedNodes.deletedNode(?)#node", "The node that should be deleted")
  self:setXMLSpecializationType()
end
function PlaceableDeletedNodes:onLoadFinished(v1)
  if self.xmlFile ~= nil then
    v3:iterate("placeable.deletedNodes.deletedNode", function(self, v1)
      local v2 = v2:getValue(v1 .. "#node", nil, u0.components, u0.i3dMappings)
      table.insert(u1, v2)
    end)
    for v6, v7 in ipairs({}) do
      delete(v7)
    end
  end
end
