-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GuiSoundPlayer = {}
local GuiSoundPlayer_mt = Class(GuiSoundPlayer)
GuiSoundPlayer.SOUND_SAMPLE_DEFINITIONS_PATH = "dataS/gui/guiSoundSamples.xml"
GuiSoundPlayer.SOUND_SAMPLE_DEFINITIONS_XML_ROOT = "GuiSoundSamples"
GuiSoundPlayer.NUM_SAMPLES_PER_SOUND = 3
GuiSoundPlayer.SAMPLE_REPLAY_TIMEOUT = 25
GuiSoundPlayer.SOUND_SAMPLES = {NONE = "", CLICK = "click", BACK = "back", HOVER = "hover", ERROR = "error", PAGING = "paging", TRANSACTION = "transaction", SUCCESS = "success", FAIL = "fail", ACHIEVEMENT = "achievement", NOTIFICATION = "notification", COLLECTIBLE = "collectible", CONFIG_SPRAY = "configSpray", CONFIG_WRENCH = "configWrench", YES = "yes", NO = "no", QUERY = "query", TEXTBOX = "textbox", SELECT = "select"}
function GuiSoundPlayer.new(soundManager)
  local v1 = setmetatable({}, u0)
  v1.soundManager = soundManager
  local v2 = v1:loadSounds(GuiSoundPlayer.SOUND_SAMPLE_DEFINITIONS_PATH)
  v1.soundSamples = v2
  return v1
end
function GuiSoundPlayer:delete()
  for v4, v5 in pairs(self.soundSamples) do
    for v9, v10 in ipairs(v5) do
      v11:deleteSample(v10)
    end
  end
  self.soundSamples = {}
end
function GuiSoundPlayer:loadSounds(sampleDefinitionXmlPath)
  local xmlFile = loadXMLFile("GuiSampleDefinitions", sampleDefinitionXmlPath)
  if xmlFile ~= nil and xmlFile ~= 0 then
    for v7, v8 in pairs(GuiSoundPlayer.SOUND_SAMPLES) do
      if not (v8 ~= GuiSoundPlayer.SOUND_SAMPLES.NONE) then
        continue
      end
      local v9 = v9:loadSample2DFromXML(xmlFile, GuiSoundPlayer.SOUND_SAMPLE_DEFINITIONS_XML_ROOT, v8, "", 1, AudioGroup.GUI)
      if v9 ~= nil then
        v2[v8] = {}
        table.insert({}, v9)
        -- TODO: structure LOP_FORNPREP (pc 60, target 85)
        local v16 = v16:cloneSample2D(v9)
        table.insert(...)
        -- TODO: structure LOP_FORNLOOP (pc 72, target 61)
      else
        local v15 = tostring(v8)
        print("Warning: Could not load GUI sound sample [" .. v15 .. "]")
      end
    end
    delete(xmlFile)
  end
  return v2
end
function GuiSoundPlayer:playSample(sampleName)
  if sampleName == GuiSoundPlayer.SOUND_SAMPLES.NONE then
    return
  end
  if self.soundSamples[sampleName] ~= nil then
    if self.soundSamples[sampleName].lastTime ~= nil and g_time - self.soundSamples[sampleName].lastTime < GuiSoundPlayer.SAMPLE_REPLAY_TIMEOUT then
      return
    end
    -- TODO: structure LOP_FORNPREP (pc 34, target 45)
    local v7 = v7:getIsSamplePlaying(v2[1])
    if not v7 then
    else
      -- TODO: structure LOP_FORNLOOP (pc 44, target 35)
    end
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L69
    v4:playSample(v3)
    v2.lastTime = g_time
    return
  end
  local v8 = tostring(sampleName)
  print("Warning: Tried playing GUI sample [" .. v8 .. "] which has not been loaded.")
end
