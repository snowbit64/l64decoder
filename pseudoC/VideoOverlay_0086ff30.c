// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VideoOverlay
// Entry Point: 0086ff30
// Size: 84 bytes
// Signature: undefined __thiscall ~VideoOverlay(VideoOverlay * this)


/* VideoOverlay::~VideoOverlay() */

void __thiscall VideoOverlay::~VideoOverlay(VideoOverlay *this)

{
  VideoPlayer *this_00;
  
  this_00 = *(VideoPlayer **)(this + 0x78);
  *(undefined ***)this = &PTR__VideoOverlay_00fdc0c8;
  if (this_00 != (VideoPlayer *)0x0) {
    VideoPlayer::~VideoPlayer(this_00);
    operator_delete(this_00);
  }
                    /* try { // try from 0086ff68 to 0086ff73 has its CatchHandler @ 0086ff84 */
  ScriptSystemManager::getInstance();
  ScriptSystemManager::getCurrentScriptSystem();
  LuauScriptSystem::enableBackgroundGc();
  Overlay::~Overlay((Overlay *)this);
  return;
}


