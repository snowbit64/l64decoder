// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: canReceiveWhenTexture
// Entry Point: 00c558a4
// Size: 188 bytes
// Signature: undefined __thiscall canReceiveWhenTexture(IR_Type * this, IR_Type * param_1, IR_Type * * param_2)


/* IR_Type::canReceiveWhenTexture(IR_Type*, IR_Type*&) */

undefined4 __thiscall
IR_Type::canReceiveWhenTexture(IR_Type *this,IR_Type *param_1,IR_Type **param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((*(int *)param_1 == 7) && (*(int *)(param_1 + 0x10) == *(int *)(this + 0x10))) &&
      (iVar1 = canReceive(*(IR_Type **)(this + 8),*(IR_Type **)(param_1 + 8),false,param_2),
      iVar1 == 0)) && (param_1[0x14] == this[0x14])) {
    if (param_1[0x15] == this[0x15]) {
      iVar1 = *(int *)(this + 0x18);
      if (*(int *)(param_1 + 0x18) == iVar1) {
        return 0;
      }
    }
    else {
      iVar1 = *(int *)(this + 0x18);
    }
    uVar2 = 0xffffffff;
    if ((this[0x15] == param_1[0x15]) && (iVar1 != 2)) {
      uVar2 = 1;
      if (*(int *)(param_1 + 0x18) == 2) {
        uVar2 = 0xffffffff;
      }
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


