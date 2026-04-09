// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createProxy
// Entry Point: 00f43b40
// Size: 488 bytes
// Signature: undefined __cdecl createProxy(btVector3 * param_1, btVector3 * param_2, int param_3, void * param_4, short param_5, short param_6, btDispatcher * param_7, void * param_8)


/* btDbvtBroadphase::createProxy(btVector3 const&, btVector3 const&, int, void*, short, short,
   btDispatcher*, void*) */

ulong * btDbvtBroadphase::createProxy
                  (btVector3 *param_1,btVector3 *param_2,int param_3,void *param_4,short param_5,
                  short param_6,btDispatcher *param_7,void *param_8)

{
  int iVar1;
  long lVar2;
  ulong *puVar3;
  ulong **ppuVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **local_a8;
  btVector3 *pbStack_a0;
  ulong *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
  puVar5 = (undefined8 *)(ulong)(uint)param_3;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (**(code **)(*(long *)param_1 + 0x70))();
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  puVar3 = (ulong *)(*(code *)PTR_FUN_01048e38)(0x60,0x10);
  *puVar3 = (ulong)(ushort)param_5;
  *(short *)(puVar3 + 1) = param_6;
  *(short *)((long)puVar3 + 10) = (short)param_7;
  uVar6 = *(undefined8 *)param_2;
  *(undefined8 *)((long)puVar3 + 0x24) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)((long)puVar3 + 0x1c) = uVar6;
  uVar7 = puVar5[1];
  uVar6 = *puVar5;
  puVar3[2] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *(undefined8 *)((long)puVar3 + 0x34) = uVar7;
  *(undefined8 *)((long)puVar3 + 0x2c) = uVar6;
  uStack_88 = *(undefined8 *)(param_2 + 8);
  local_90 = *(undefined8 *)param_2;
  uStack_78 = puVar5[1];
  uStack_80 = *puVar5;
  *(undefined4 *)(puVar3 + 0xb) = *(undefined4 *)(param_1 + 0xec);
  iVar1 = *(int *)(param_1 + 0x118);
  *(int *)(param_1 + 0x118) = iVar1 + 1;
  *(int *)(puVar3 + 3) = iVar1 + 1;
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 == (undefined8 *)0x0) {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    puVar5 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x38,0x10);
    puVar5[6] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  puVar5[4] = 0;
  puVar5[5] = puVar3;
  puVar5[6] = 0;
  puVar5[1] = uStack_88;
  *puVar5 = local_90;
  puVar5[3] = uStack_78;
  puVar5[2] = uStack_80;
  FUN_00f42680((btDbvt *)(param_1 + 8),*(undefined8 *)(param_1 + 8),puVar5);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  puVar3[8] = (ulong)puVar5;
  iVar1 = *(int *)(param_1 + 0xec);
  puVar3[9] = 0;
  ppuVar4 = (ulong **)(param_1 + (long)iVar1 * 8 + 200);
  puVar3[10] = (ulong)*ppuVar4;
  if (*ppuVar4 != (ulong *)0x0) {
    (*ppuVar4)[9] = (ulong)puVar3;
  }
  *ppuVar4 = puVar3;
  if (param_1[0x11d] == (btVector3)0x0) {
    local_a8 = &PTR__ICollide_01018ed0;
    pbStack_a0 = param_1;
    local_98 = puVar3;
    btDbvt::collideTV((btDbvt *)(param_1 + 8),*(btDbvtNode **)(param_1 + 8),
                      (btDbvtAabbMm *)&local_90,(ICollide *)&local_a8);
    btDbvt::collideTV((btDbvt *)(param_1 + 0x68),*(btDbvtNode **)(param_1 + 0x68),
                      (btDbvtAabbMm *)&local_90,(ICollide *)&local_a8);
  }
  (**(code **)(*(long *)param_1 + 0x78))(param_1);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


