// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TransferTo
// Entry Point: 00df9a38
// Size: 92 bytes
// Signature: undefined __thiscall TransferTo(StrPair * this, StrPair * param_1)


/* tinyxml2::StrPair::TransferTo(tinyxml2::StrPair*) */

void __thiscall tinyxml2::StrPair::TransferTo(StrPair *this,StrPair *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (this != param_1) {
    if ((((byte)param_1[1] >> 1 & 1) != 0) && (*(void **)(param_1 + 8) != (void *)0x0)) {
      operator_delete__(*(void **)(param_1 + 8));
    }
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar1 = *(undefined8 *)(this + 8);
    uVar2 = *(undefined8 *)(this + 0x10);
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)param_1 = *(undefined4 *)this;
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    *(undefined4 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  return;
}


