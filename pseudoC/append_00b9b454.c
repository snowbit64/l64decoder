// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: append
// Entry Point: 00b9b454
// Size: 56 bytes
// Signature: undefined __thiscall append(StringStream * this, StringStream * param_1)


/* StringStream::append(StringStream&) */

void __thiscall StringStream::append(StringStream *this,StringStream *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)param_1;
  if (*(long *)this != 0) {
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      *(long *)(*(long *)(this + 8) + 0x10) = lVar1;
      *(undefined8 *)(this + 8) = uVar2;
    }
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(long *)this = lVar1;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


