-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

NoteManager = {}
local v4 = getUserProfileAppPath()
NoteManager.NOTES_DIRECTORY = v4 .. "notes/"
local NoteManager_mt = Class(NoteManager, AbstractManager)
function NoteManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function NoteManager:initDataStructures()
  self.sessionDirectory = nil
  self.sessionTimestamp = nil
  self.mapTitle = nil
  self.currentNoteIndex = 1
  self.colors = {}
  table.insert(self.colors, {color = {1, 1, 1, 1}})
  for v5, v6 in ipairs(DebugUtil.COLORS) do
    table.insert(self.colors, {color = {v6[1], v6[2], v6[3], 1}})
  end
  self.lastColor = v1
  if not self.initialized then
    addConsoleCommand("gsNoteExport", "Exports currently created note nodes as i3d file", "consoleCommandExportNotes", self)
    addConsoleCommand("gsNoteList", "Lists currently created note nodes in console/log", "consoleCommandListNotes", self)
    self.initialized = true
  end
end
function NoteManager:registerInputActionEvent()
  if g_currentMission ~= nil then
    local v1, v2 = v1:registerActionEvent(InputAction.ADD_NOTE, self, self.onAddNote, false, true, false, true)
    v3:setActionEventTextVisibility(v2, false)
  end
end
function NoteManager:unloadMapData()
  self:exportNotes()
  self:resetNotes()
end
function NoteManager:resetNotes()
  if self.notesRoot ~= nil then
    local v1 = entityExists(self.notesRoot)
    if v1 then
      delete(self.notesRoot)
    end
  end
  self.notesRoot = nil
  self.sessionDirectory = nil
  self.currentNoteIndex = 1
end
function NoteManager.loadNotes(v0)
end
function NoteManager:onAddNote()
  if self.sessionDirectory == nil then
    createFolder(NoteManager.NOTES_DIRECTORY)
    local v1 = string.gsub(g_currentMission.missionInfo.mapTitle, " ", "")
    self.mapTitle = v1
    v1 = getDate("%Y_%m_%d__%H_%M")
    self.sessionTimestamp = v1
    self.sessionDirectory = NoteManager.NOTES_DIRECTORY .. self.sessionTimestamp .. "_" .. self.mapTitle .. "/"
    createFolder(self.sessionDirectory)
  end
  v1 = string.format("note_%d.jpg", self.currentNoteIndex)
  self.lastNoteScreenshotFilepath = self.sessionDirectory .. v1
  saveScreenshot(self.lastNoteScreenshotFilepath)
  TextInputDialog.show(self.onNoteTextEntered, self, nil, "Enter note text", false, nil, "Add Note", 200, nil, false)
end
function NoteManager:onNoteTextEntered(text, ok)
  if ok then
    local v3 = string.trim(text)
    if v3 ~= "" then
      ColorPickerDialog.show(self.onNotePickColor, self, {text = v3, colors = self.colors}, self.colors, self.lastColor)
      return
    end
  end
  self:cancelCurrentNote()
end
function NoteManager:onNotePickColor(colorIndex, args)
  if colorIndex == nil then
    self:cancelCurrentNote()
    return
  end
  if self.notesRoot == nil then
    local v3 = createTransformGroup("noteNodes")
    self.notesRoot = v3
    local v4 = getRootNode()
    link(v4, self.notesRoot)
  end
  self.lastColor = args.colors[colorIndex].color
  local v6 = string.format("[%d] %s", self.currentNoteIndex, args.text)
  v4 = createNoteNode(self.notesRoot, v6, args.colors[colorIndex].color[1], args.colors[colorIndex].color[2], args.colors[colorIndex].color[3], false)
  local v7 = string.format("note_%d", self.currentNoteIndex)
  setName(...)
  if g_isDevelopmentVersion and self.currentNoteIndex == 1 then
    executeConsoleCommand("enableNoteRendering true")
  end
  self.currentNoteIndex = self.currentNoteIndex + 1
  v7 = getNoteNodeText(v4)
  local v8 = getWorldTranslation(v4)
  Logging.info(...)
  self.lastNoteScreenshotFilepath = nil
end
function NoteManager:cancelCurrentNote()
  if self.lastNoteScreenshotFilepath ~= nil then
    local v1 = fileExists(self.lastNoteScreenshotFilepath)
    if v1 then
      deleteFile(self.lastNoteScreenshotFilepath)
    end
  end
end
function NoteManager:exportNotes()
  if self.notesRoot == nil then
    return 0
  end
  local filename = string.format("notes_%s_%s.i3d", self.sessionTimestamp, self.mapTitle)
  Logging.info("Exporting notes to %s", self.sessionDirectory .. filename)
  exportNoteNodes(self.sessionDirectory .. filename)
  return getNumOfChildren(self.notesRoot)
end
function NoteManager:consoleCommandExportNotes()
  if self.notesRoot == nil then
    return "Error: No notes to export, add notes first"
  end
  local v3 = self:exportNotes()
  return string.format(...)
end
function NoteManager:consoleCommandListNotes()
  if self.notesRoot == nil then
    return "No existing notes"
  end
  local numNotes = getNumOfChildren(self.notesRoot)
  -- TODO: structure LOP_FORNPREP (pc 14, target 40)
  local v5 = getChildAt(self.notesRoot, 0)
  local v6, v7, v8 = getWorldTranslation(v5)
  local v12 = getNoteNodeText(v5)
  local v10 = string.format("%s [Pos: %.1f %1.f %1.f]", v12, v6, v7, v8)
  print(...)
  -- TODO: structure LOP_FORNLOOP (pc 39, target 15)
  return string.format("Listed %d notes", numNotes)
end
local v1 = NoteManager.new()
g_noteManager = v1
