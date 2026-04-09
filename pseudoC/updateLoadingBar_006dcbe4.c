// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateLoadingBar
// Entry Point: 006dcbe4
// Size: 40 bytes
// Signature: undefined __thiscall updateLoadingBar(EngineApplication * this, float param_1, bool param_2)


/* EngineApplication::updateLoadingBar(float, bool) */

void __thiscall
EngineApplication::updateLoadingBar(EngineApplication *this,float param_1,bool param_2)

{
  drawInitialFrame(this,*(IRenderWindow **)(this + 0x178),param_1,param_2,
                   *(IDisplay **)(this + 0x290),false,true);
  AndroidSysUtil::processEventQueue();
  return;
}


