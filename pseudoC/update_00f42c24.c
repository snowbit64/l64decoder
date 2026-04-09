// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00f42c24
// Size: 324 bytes
// Signature: undefined __thiscall update(btDbvt * this, btDbvtNode * param_1, btDbvtAabbMm * param_2, btVector3 * param_3)


/* btDbvt::update(btDbvtNode*, btDbvtAabbMm&, btVector3 const&) */

undefined8 __thiscall
btDbvt::update(btDbvt *this,btDbvtNode *param_1,btDbvtAabbMm *param_2,btVector3 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (((((*(float *)param_2 < *(float *)param_1) ||
        (*(float *)(param_2 + 4) < *(float *)(param_1 + 4))) ||
       (*(float *)(param_2 + 8) < *(float *)(param_1 + 8))) ||
      ((*(float *)(param_1 + 0x10) < *(float *)(param_2 + 0x10) ||
       (*(float *)(param_1 + 0x14) < *(float *)(param_2 + 0x14))))) ||
     (*(float *)(param_1 + 0x18) < *(float *)(param_2 + 0x18))) {
    lVar3 = (ulong)(0.0 < *(float *)param_3) * 0x10;
    *(float *)(param_2 + lVar3) = *(float *)(param_2 + lVar3) + *(float *)param_3;
    lVar3 = 0x14;
    if (*(float *)(param_3 + 4) <= 0.0) {
      lVar3 = 4;
    }
    *(float *)(param_2 + lVar3) = *(float *)(param_2 + lVar3) + *(float *)(param_3 + 4);
    lVar3 = 0x18;
    if (*(float *)(param_3 + 8) <= 0.0) {
      lVar3 = 8;
    }
    *(float *)(param_2 + lVar3) = *(float *)(param_2 + lVar3) + *(float *)(param_3 + 8);
    lVar3 = FUN_00f424e4(this,param_1);
    if (lVar3 != 0) {
      iVar1 = *(int *)(this + 0x10);
      if (iVar1 < 0) {
        lVar3 = *(long *)this;
      }
      else {
        while ((iVar1 != 0 && (*(long *)(lVar3 + 0x20) != 0))) {
          iVar1 = iVar1 + -1;
          lVar3 = *(long *)(lVar3 + 0x20);
        }
      }
    }
    uVar5 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)param_1 = uVar5;
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    FUN_00f42680(this,lVar3,param_1);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


