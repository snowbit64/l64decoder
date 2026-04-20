-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MilkingRobot = {}
local MilkingRobot_mt = Class(MilkingRobot)
function MilkingRobot.new(owner, baseDirectory, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5)
  v3.owner = owner
  v3.baseDirectory = baseDirectory
  return v3
end
function MilkingRobot:load(linkNode, filename, asyncCallbackFunction, asyncCallbackObject, asyncCallbackArgs)
  local v6 = XMLFile.load("milkingRobot", filename)
  if v6 == nil then
    return false
  end
  local v8 = v6:getString("milkingRobot.filename")
  local v7 = Utils.getFilename(v8, self.baseDirectory)
  local v9 = v9:loadSharedI3DFileAsync(v7, true, false, self.onI3DFileLoaded, self, {xmlFile = v6, linkNode = linkNode, asyncCallbackFunction = asyncCallbackFunction, asyncCallbackObject = asyncCallbackObject, asyncCallbackArgs = asyncCallbackArgs})
  self.sharedLoadRequestId = v9
  return true
end
function MilkingRobot:delete()
  if self.sharedLoadRequestId ~= nil then
    v1:releaseSharedI3DFile(self.sharedLoadRequestId)
    self.sharedLoadRequestId = nil
  end
  if self.node ~= nil then
    delete(self.node)
    self.node = nil
  end
end
function MilkingRobot:onI3DFileLoaded(node, failedReason, args)
  if node ~= 0 then
    link(args.linkNode, node)
    self.node = node
  end
  v4:delete()
  args.asyncCallbackFunction(args.asyncCallbackObject, self, args.asyncCallbackArgs)
end
function MilkingRobot:finalizePlacement()
  if self.node ~= nil then
    addToPhysics(self.node)
  end
end
