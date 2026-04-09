// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert
// Entry Point: 00f42988
// Size: 168 bytes
// Signature: undefined __thiscall insert(btDbvt * this, btDbvtAabbMm * param_1, void * param_2)


/* btDbvt::insert(btDbvtAabbMm const&, void*) */

undefined8 * __thiscall btDbvt::insert(btDbvt *this,btDbvtAabbMm *param_1,void *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar1 == (undefined8 *)0x0) {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    puVar1 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x38,0x10);
    puVar1[6] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
  }
  else {
    *(undefined8 *)(this + 8) = 0;
  }
  puVar1[4] = 0;
  puVar1[5] = param_2;
  puVar1[6] = 0;
  uVar4 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *puVar1 = uVar4;
  puVar1[3] = uVar3;
  puVar1[2] = uVar2;
  FUN_00f42680(this,*(undefined8 *)this,puVar1);
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  return puVar1;
}


