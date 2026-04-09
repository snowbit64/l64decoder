// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deserialize
// Entry Point: 00736b58
// Size: 996 bytes
// Signature: undefined __thiscall deserialize(VehicleNavigationAgent * this, VehicleNavigationMap * param_1, File * param_2)


/* VehicleNavigationAgent::deserialize(VehicleNavigationMap const&, File&) */

undefined4 __thiscall
VehicleNavigationAgent::deserialize
          (VehicleNavigationAgent *this,VehicleNavigationMap *param_1,File *param_2)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  VehicleNavigationGridAdapter *this_00;
  ulong uVar7;
  undefined4 uVar8;
  void *pvVar9;
  undefined8 uVar10;
  float local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0 [10];
  Vector2 aVStack_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar5 = (**(code **)(*(long *)param_2 + 0x28))(param_2,aVStack_50,8);
  if (((((iVar5 == 8) &&
        (iVar5 = (**(code **)(*(long *)param_2 + 0x28))(param_2,&local_bc,4), iVar5 == 4)) &&
       (iVar5 = (**(code **)(*(long *)param_2 + 0x28))(param_2,&fStack_b4,4), iVar5 == 4)) &&
      ((iVar5 = (**(code **)(*(long *)param_2 + 0x28))(param_2,this + 0x139c,4), iVar5 == 4 &&
       (iVar5 = (**(code **)(*(long *)param_2 + 0x28))(param_2,&local_b8,4), iVar5 == 4)))) &&
     ((iVar5 = (**(code **)(*(long *)param_2 + 0x28))(param_2,&local_c0,4), iVar5 == 4 &&
      (iVar5 = (**(code **)(*(long *)param_2 + 0x28))(param_2,this + 0x137c,4), iVar5 == 4)))) {
    iVar5 = (**(code **)(*(long *)param_2 + 0x28))(param_2,this + 0x1380,2);
    if ((((((iVar5 == 2) &&
           (iVar5 = (**(code **)(*(long *)param_2 + 0x28))(param_2,this + 0x1382,1), iVar5 == 1)) &&
          (iVar5 = (**(code **)(*(long *)param_2 + 0x28))(param_2,this + 0x1394,4), iVar5 == 4)) &&
         (((iVar5 = (**(code **)(*(long *)param_2 + 0x28))(param_2,this + 0x1398,4), iVar5 == 4 &&
           (iVar5 = (**(code **)(*(long *)param_2 + 0x28))(param_2,this + 0x13a0,4), iVar5 == 4)) &&
          (iVar5 = (**(code **)(*(long *)param_2 + 0x28))(param_2,this + 0x13a8,8), iVar5 == 8))))
        && (((iVar5 = (**(code **)(*(long *)param_2 + 0x28))(param_2,this + 0x13b0,0x30),
             iVar5 == 0x30 &&
             (iVar5 = (**(code **)(*(long *)param_2 + 0x28))(param_2,local_a0,0x50), iVar5 == 0x50))
            && ((iVar5 = (**(code **)(*(long *)param_2 + 0x28))(param_2,&local_b0,0x10),
                iVar5 == 0x10 &&
                ((bVar4 = SerializationUtil::read<OrientedBox,std::__ndk1::allocator<OrientedBox>>
                                    (param_2,(vector *)(this + 0x12d8)), bVar4 &&
                 (bVar4 = SerializationUtil::read<OrientedBox,std::__ndk1::allocator<OrientedBox>>
                                    (param_2,(vector *)(this + 0x12f0)), bVar4)))))))) &&
       ((iVar5 = (**(code **)(*(long *)param_2 + 0x28))(param_2,this + 0x1308,4), iVar5 == 4 &&
        (iVar5 = (**(code **)(*(long *)param_2 + 0x28))(param_2,this + 0x130c,4), iVar5 == 4)))) {
      pvVar9 = *(void **)(this + 0x12a0);
      local_c0 = 25.0;
      if (pvVar9 != (void *)0x0) {
        pvVar6 = *(void **)((long)pvVar9 + 0x68);
        if (pvVar6 != (void *)0x0) {
          *(void **)((long)pvVar9 + 0x70) = pvVar6;
          operator_delete(pvVar6);
        }
        pvVar6 = *(void **)((long)pvVar9 + 0x40);
        if (pvVar6 != (void *)0x0) {
          *(void **)((long)pvVar9 + 0x48) = pvVar6;
          operator_delete(pvVar6);
        }
        operator_delete(pvVar9);
      }
      fVar3 = local_c0;
      this_00 = (VehicleNavigationGridAdapter *)operator_new(0x14080);
                    /* try { // try from 00736ec8 to 00736ed7 has its CatchHandler @ 00736f3c */
      VehicleNavigationGridAdapter::VehicleNavigationGridAdapter
                (this_00,param_1,local_b8,*(ushort *)(this + 0x1380),aVStack_50,fStack_b4,local_bc,
                 fVar3);
      *(VehicleNavigationGridAdapter **)(this + 0x12a0) = this_00;
      if (*(int *)(this + 0x13a0) != -1) {
        uVar7 = 0xffffffff;
        do {
          uVar1 = (int)uVar7 + 1;
          uVar7 = (ulong)uVar1;
          uVar10 = local_a0[uVar7 * 2];
          *(undefined8 *)(this + uVar7 * 0x10 + 0x1318) = local_a0[uVar7 * 2 + 1];
          *(undefined8 *)(this + uVar7 * 0x10 + 0x1310) = uVar10;
        } while (uVar1 != *(uint *)(this + 0x13a0));
      }
      uVar8 = 1;
      *(undefined8 *)(this + 0x1368) = uStack_a8;
      *(undefined8 *)(this + 0x1360) = local_b0;
      *(undefined4 *)(this + 0x1376) = 0xffffffff;
      *(undefined2 *)(this + 0x137a) = 0xffff;
      goto LAB_00736e68;
    }
  }
  uVar8 = 0;
LAB_00736e68:
  clearArcLengths();
  initializeArcLengths();
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}


