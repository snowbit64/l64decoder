// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00f42d68
// Size: 292 bytes
// Signature: undefined __thiscall update(btDbvt * this, btDbvtNode * param_1, btDbvtAabbMm * param_2, float param_3)


/* btDbvt::update(btDbvtNode*, btDbvtAabbMm&, float) */

undefined8 __thiscall
btDbvt::update(btDbvt *this,btDbvtNode *param_1,btDbvtAabbMm *param_2,float param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  
  if (*(float *)param_1 <= *(float *)param_2) {
    fVar6 = *(float *)(param_2 + 4);
    if ((((*(float *)(param_1 + 4) <= fVar6) && (*(float *)(param_1 + 8) <= *(float *)(param_2 + 8))
         ) && (*(float *)(param_2 + 0x10) <= *(float *)(param_1 + 0x10))) &&
       ((*(float *)(param_2 + 0x14) <= *(float *)(param_1 + 0x14) &&
        (*(float *)(param_2 + 0x18) <= *(float *)(param_1 + 0x18))))) {
      return 0;
    }
  }
  else {
    fVar6 = *(float *)(param_2 + 4);
  }
  *(float *)param_2 = *(float *)param_2 - param_3;
  *(float *)(param_2 + 4) = fVar6 - param_3;
  *(float *)(param_2 + 8) = *(float *)(param_2 + 8) - param_3;
  *(ulong *)(param_2 + 0x10) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) + param_3,
                (float)*(undefined8 *)(param_2 + 0x10) + param_3);
  *(float *)(param_2 + 0x18) = *(float *)(param_2 + 0x18) + param_3;
  lVar2 = FUN_00f424e4(this,param_1);
  if (lVar2 != 0) {
    iVar1 = *(int *)(this + 0x10);
    if (iVar1 < 0) {
      lVar2 = *(long *)this;
    }
    else {
      while ((iVar1 != 0 && (*(long *)(lVar2 + 0x20) != 0))) {
        iVar1 = iVar1 + -1;
        lVar2 = *(long *)(lVar2 + 0x20);
      }
    }
  }
  uVar5 = *(undefined8 *)param_2;
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)param_1 = uVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  FUN_00f42680(this,lVar2,param_1);
  return 1;
}


