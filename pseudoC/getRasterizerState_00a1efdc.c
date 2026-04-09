// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRasterizerState
// Entry Point: 00a1efdc
// Size: 48 bytes
// Signature: undefined __thiscall getRasterizerState(RenderPathManager * this, bool param_1, bool param_2, bool param_3, uint param_4)


/* RenderPathManager::getRasterizerState(bool, bool, bool, unsigned int) */

undefined8 __thiscall
RenderPathManager::getRasterizerState
          (RenderPathManager *this,bool param_1,bool param_2,bool param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (param_1) {
    iVar2 = 2;
  }
  iVar1 = 0;
  if (!param_3) {
    iVar1 = iVar2;
  }
  return *(undefined8 *)
          (this + (ulong)((((uint)param_2 | param_4 << 1) & 7) * 3 + iVar1) * 8 + 0x130);
}


