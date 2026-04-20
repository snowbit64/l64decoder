-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIJobTypeManager = {}
AIJobType = nil
local AIJobTypeManager_mt = Class(AIJobTypeManager)
function AIJobTypeManager.new(isServer, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.isServer = isServer
  return v2
end
function AIJobTypeManager:loadMapData(xmlFile, missionInfo, baseDirectory)
  self.jobTypes = {}
  self.nameToIndex = {}
  self.classObjectToIndex = {}
  AIJobType = self.nameToIndex
  self:registerJobType("GOTO", "$l10n_ai_jobTitleGoto", AIJobGoTo)
  self:registerJobType("FIELDWORK", "$l10n_ai_jobTitleFieldWork", AIJobFieldWork)
  self:registerJobType("CONVEYOR", "$l10n_ai_jobTitleConveyor", AIJobConveyor)
  self:registerJobType("DELIVER", "$l10n_ai_jobTitleDeliver", AIJobDeliver)
  self:registerJobType("LOAD_AND_DELIVER", "$l10n_ai_jobTitleLoadAndDeliver", AIJobLoadAndDeliver)
end
function AIJobTypeManager:delete()
  self.jobTypes = {}
  self.nameToIndex = {}
  self.classObjectToIndex = {}
  AIJobType = self.nameToIndex
end
function AIJobTypeManager:registerJobType(name, title, classObject)
  local v4 = ClassUtil.getIsValidIndexName(name)
  if not v4 then
    local v6 = tostring(name)
    Logging.warning(...)
    return nil
  end
  v4 = name:upper()
  if self.nameToIndex[v4] ~= nil then
    v6 = tostring(v4)
    Logging.warning(...)
    return nil
  end
  local v5 = v5:convertText(title)
  table.insert(self.jobTypes, {name = name, title = v5, classObject = classObject, index = #self.jobTypes + 1})
  self.nameToIndex[name] = {name = name, title = v5, classObject = classObject, index = #self.jobTypes + 1}.index
  self.classObjectToIndex[classObject] = {name = name, title = v5, classObject = classObject, index = #self.jobTypes + 1}.index
  return {name = name, title = v5, classObject = classObject, index = #self.jobTypes + 1}
end
function AIJobTypeManager:getJobTypeIndex(job)
  local classObject = ClassUtil.getClassObjectByObject(job)
  if classObject == nil then
    return nil
  end
  return self.classObjectToIndex[classObject]
end
function AIJobTypeManager:createJob(typeIndex)
  if typeIndex == nil then
    return nil
  end
  if self.jobTypes[typeIndex] == nil then
    return nil
  end
  local v3 = v2.classObject.new(self.isServer)
  v3.jobTypeIndex = typeIndex
  return v3
end
function AIJobTypeManager:getJobTypeByIndex(index)
  return self.jobTypes[index]
end
function AIJobTypeManager:getJobTypeIndexByName(name)
  if name == nil then
    return nil
  end
  local v2 = name:upper()
  return self.nameToIndex[v2]
end
