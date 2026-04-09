// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: storeConst
// Entry Point: 00c28d40
// Size: 188 bytes
// Signature: undefined __thiscall storeConst(IR_Function * this, IR_TConst * param_1)


/* IR_Function::storeConst(IR_TConst const&) */

ulong __thiscall IR_Function::storeConst(IR_Function *this,IR_TConst *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  IR_Const *this_00;
  
  lVar2 = *(long *)(this + 0x80);
  if (*(long *)(this + 0x88) == lVar2) {
    uVar1 = 0;
  }
  else {
    uVar3 = 0;
    do {
      this_00 = (IR_Const *)(lVar2 + uVar3 * 0x18);
      uVar1 = IR_Const::operator==(this_00,(IR_Const *)param_1);
      if (((uVar1 & 1) != 0) && (*(long *)(this_00 + 0x10) == *(long *)(param_1 + 0x10)))
      goto LAB_00c28de0;
      lVar2 = *(long *)(this + 0x80);
      uVar3 = (ulong)((int)uVar3 + 1);
      uVar1 = (*(long *)(this + 0x88) - lVar2 >> 3) * -0x5555555555555555;
    } while (uVar3 <= uVar1 && uVar1 - uVar3 != 0);
  }
  FUN_00c290dc(this + 0x80,param_1);
  uVar3 = uVar1;
LAB_00c28de0:
  return uVar3 & 0xffffffff;
}


