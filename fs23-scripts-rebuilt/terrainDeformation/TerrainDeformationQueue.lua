-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TerrainDeformationQueue = {}
local TerrainDeformationQueue_mt = Class(TerrainDeformationQueue)
function TerrainDeformationQueue.new()
  setmetatable({}, u0)
  return {jobQueue = {}, currentJob = nil, cancelling = false}
end
function TerrainDeformationQueue:queueJob(deformer, previewOnly, callbackFunc, callbackObject)
  table.insert(self.jobQueue, {deformer = deformer, previewOnly = previewOnly, callbackFunc = callbackFunc, callbackObject = callbackObject})
  self:tryRunJob()
end
function TerrainDeformationQueue:tryRunJob()
  if not self.currentJob and self.jobQueue[1] then
    self.currentJob = self.jobQueue[1]
    table.remove(self.jobQueue, 1)
    if self.currentJob.deformer then
      v1:apply(self.currentJob.previewOnly, "onJobComplete", self)
      return
    end
    self:onJobComplete(TerrainDeformation.STATE_SUCCESS, 0, "")
  end
end
function TerrainDeformationQueue:onJobComplete(errorCode, displacedVolume, blockedObjectName)
  if self.currentJob.callbackObject then
    self.currentJob.callbackObject[self.currentJob.callbackFunc](self.currentJob.callbackObject, errorCode, displacedVolume, blockedObjectName)
  else
    _G[self.currentJob.callbackFunc](errorCode, displacedVolume, blockedObjectName)
  end
  self.currentJob = nil
  if not self.cancelling then
    self:tryRunJob()
  end
end
function TerrainDeformationQueue:cancelAllJobs()
  self.cancelling = true
  if self.currentJob then
    v1:cancel()
  end
  while true do
    if not self.jobQueue[1] then
      break
    end
    self.currentJob = self.jobQueue[1]
    table.remove(self.jobQueue, 1)
    self:onJobComplete(TerrainDeformation.STATE_CANCELLED, 0, "")
  end
  self.currentJob = nil
  self.cancelling = false
end
local v1 = TerrainDeformationQueue.new()
g_terrainDeformationQueue = v1
