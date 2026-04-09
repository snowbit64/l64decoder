// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadCookedTriangleMesh
// Entry Point: 00bafed4
// Size: 488 bytes
// Signature: undefined __cdecl loadCookedTriangleMesh(uchar * param_1, uint param_2, Bt2PhysicsMeshInterface * * param_3, btOptimizedBvh * * param_4, BtTriangleInfoMap * * param_5)


/* Bt2PhysicsSerialization::loadCookedTriangleMesh(unsigned char*, unsigned int,
   Bt2PhysicsMeshInterface*&, btOptimizedBvh*&, BtTriangleInfoMap*&) */

void Bt2PhysicsSerialization::loadCookedTriangleMesh
               (uchar *param_1,uint param_2,Bt2PhysicsMeshInterface **param_3,
               btOptimizedBvh **param_4,BtTriangleInfoMap **param_5)

{
  ushort *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  Bt2PhysicsMeshInterface *this;
  long *this_00;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  long local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined8 *puStack_88;
  long local_80;
  ulong uStack_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((((0xf < param_2) && (*(short *)param_1 == 0x6d74)) && (*(short *)(param_1 + 2) == 3)) &&
     (*(uint *)(param_1 + 4) <= param_2)) {
    iVar3 = *(int *)(param_1 + 0xc);
    puVar1 = (ushort *)((long)(param_1 + 0x10) + (ulong)(uint)(*(int *)(param_1 + 8) * 0xc));
    this = (Bt2PhysicsMeshInterface *)btAlignedAllocInternal(0x30,0x10);
                    /* try { // try from 00baff6c to 00baff7f has its CatchHandler @ 00bb00d0 */
    Bt2PhysicsMeshInterface::Bt2PhysicsMeshInterface
              (this,*(uint *)(param_1 + 8),(float *)(param_1 + 0x10),*(uint *)(param_1 + 0xc),puVar1
               ,true,false);
    *param_3 = this;
    puVar5 = (undefined8 *)
             ((long)puVar1 +
             ((ulong)(uint)(*(int *)(param_1 + 0xc) << 1) & 2) + (ulong)(uint)(iVar3 << 1));
    local_90 = puVar5 + 9;
    uStack_c8 = puVar5[1];
    local_d0 = *puVar5;
    uStack_b8 = puVar5[3];
    uStack_c0 = puVar5[2];
    uVar7 = puVar5[8];
    uStack_a8 = puVar5[5];
    local_b0 = puVar5[4];
    uStack_98 = puVar5[7];
    uStack_a0 = puVar5[6];
    lVar2 = (long)local_90 +
            (ulong)(uint)(*(int *)(puVar5 + 7) * 0x30 + *(int *)((long)puVar5 + 0x3c) * 0x10);
    puStack_88 = local_90;
    local_80 = lVar2;
    uStack_78 = uVar7;
    this_00 = (long *)btAlignedAllocInternal(0xf8,0x10);
                    /* try { // try from 00baffdc to 00baffdf has its CatchHandler @ 00bb00bc */
    btOptimizedBvh::btOptimizedBvh((btOptimizedBvh *)this_00);
    *param_4 = (btOptimizedBvh *)this_00;
    (**(code **)(*this_00 + 0x28))(this_00,&local_d0);
    if (*(short *)(param_1 + 2) == 3) {
      puVar5 = (undefined8 *)(lVar2 + ((uVar7 >> 0x20) * 5 & 0x3fffffff) * 4);
      local_e0 = (long)puVar5 + 0x1c;
      uStack_ec = *(undefined8 *)((long)puVar5 + 0x14);
      uStack_f0 = (undefined4)((ulong)*(undefined8 *)((long)puVar5 + 0xc) >> 0x20);
      uStack_100 = *puVar5;
      uStack_f8 = (undefined4)puVar5[1];
      local_f4 = (undefined4)((ulong)puVar5[1] >> 0x20);
      lStack_d8 = local_e0 + (long)(int)uStack_ec * 8;
      puVar5 = (undefined8 *)operator_new(0x38);
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[4] = 0;
      *param_5 = (BtTriangleInfoMap *)puVar5;
      puVar5[2] = 0x3dcccccd322bcc76;
      puVar5[1] = 0x38d1b71700000000;
      puVar5[3] = 0x322bcc7640c90fdb;
      *puVar5 = &PTR__BtTriangleInfoMap_00feb2f0;
      BtTriangleInfoMap::deSerialize
                ((BtTriangleInfoMap *)puVar5,(BtTriangleInfoMapData *)&uStack_100);
      uVar6 = 1;
      goto LAB_00bb0088;
    }
  }
  uVar6 = 0;
LAB_00bb0088:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


