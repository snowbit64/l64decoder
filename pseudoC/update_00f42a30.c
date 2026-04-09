// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00f42a30
// Size: 112 bytes
// Signature: undefined __thiscall update(btDbvt * this, btDbvtNode * param_1, btDbvtAabbMm * param_2)


/* btDbvt::update(btDbvtNode*, btDbvtAabbMm&) */

void __thiscall btDbvt::update(btDbvt *this,btDbvtNode *param_1,btDbvtAabbMm *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_00f424e4();
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
  uVar3 = *(undefined8 *)param_2;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)param_1 = uVar3;
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  FUN_00f42680(this,lVar2,param_1);
  return;
}


