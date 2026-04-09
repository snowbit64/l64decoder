// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Flush
// Entry Point: 00cd6a48
// Size: 220 bytes
// Signature: undefined __thiscall Flush(Filter * this, bool param_1, int param_2, bool param_3)


/* CryptoPP::Filter::Flush(bool, int, bool) */

undefined8 __thiscall CryptoPP::Filter::Flush(Filter *this,bool param_1,int param_2,bool param_3)

{
  ulong uVar1;
  long *plVar2;
  
  if (*(int *)(this + 0x28) != 1) {
    if (*(int *)(this + 0x28) != 0) {
      return 0;
    }
    uVar1 = (**(code **)(*(long *)this + 0x60))(this,param_1,param_3);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  if (param_2 != 0) {
    plVar2 = (long *)(**(code **)(*(long *)this + 0x160))(this);
    uVar1 = (**(code **)(*plVar2 + 0x140))(plVar2,&DEFAULT_CHANNEL,param_1,param_2 + -1,param_3);
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(this + 0x28) = 1;
      return 1;
    }
  }
  *(undefined4 *)(this + 0x28) = 0;
  return 0;
}


