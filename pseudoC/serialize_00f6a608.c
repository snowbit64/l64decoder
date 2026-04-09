// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serialize
// Entry Point: 00f6a608
// Size: 1264 bytes
// Signature: undefined __thiscall serialize(btStridingMeshInterface * this, void * param_1, btSerializer * param_2)


/* btStridingMeshInterface::serialize(void*, btSerializer*) const */

char * __thiscall
btStridingMeshInterface::serialize
          (btStridingMeshInterface *this,void *param_1,btSerializer *param_2)

{
  undefined2 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined4 *puVar12;
  undefined2 *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  undefined2 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  long lVar21;
  undefined4 uVar22;
  uint local_90;
  uint local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  long local_78;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar3 = (**(code **)(*(long *)this + 0x38))();
  *(undefined8 *)param_1 = 0;
  *(int *)((long)param_1 + 0x18) = iVar3;
  if (iVar3 != 0) {
    lVar4 = (**(code **)(*(long *)param_2 + 0x20))(param_2,0x38,iVar3);
    puVar19 = *(undefined8 **)(lVar4 + 8);
    uVar5 = (**(code **)(*(long *)param_2 + 0x38))(param_2,puVar19);
    *(undefined8 *)param_1 = uVar5;
    iVar3 = (**(code **)(*(long *)this + 0x38))(this);
    if (0 < iVar3) {
      iVar20 = 0;
      do {
        (**(code **)(*(long *)this + 0x20))
                  (this,&local_70,&local_8c,&local_80,&local_88,&local_78,&local_7c,&local_90,
                   &local_84,iVar20);
        *(uint *)(puVar19 + 6) = local_90;
        *(uint *)((long)puVar19 + 0x34) = local_8c;
        puVar19[1] = 0;
        *puVar19 = 0;
        puVar19[3] = 0;
        puVar19[2] = 0;
        puVar19[5] = 0;
        puVar19[4] = 0;
        if (local_84 == 5) {
          if (local_90 != 0) {
            lVar6 = (**(code **)(*(long *)param_2 + 0x20))(param_2,4);
            lVar21 = *(long *)(lVar6 + 8);
            uVar5 = (**(code **)(*(long *)param_2 + 0x38))(param_2,lVar21);
            puVar19[4] = uVar5;
            if (0 < (int)local_90) {
              lVar9 = 0;
              puVar11 = (undefined *)(lVar21 + 2);
              do {
                iVar8 = (int)lVar9;
                lVar9 = lVar9 + 1;
                puVar14 = (undefined *)(local_78 + (long)local_7c * (long)iVar8);
                puVar11[-2] = *puVar14;
                puVar11[-1] = puVar14[1];
                *puVar11 = puVar14[2];
                puVar11 = puVar11 + 4;
              } while (lVar9 < (int)local_90);
            }
            lVar21 = *(long *)param_2;
            uVar5 = *(undefined8 *)(lVar6 + 8);
            pcVar7 = "btCharIndexTripletData";
            goto LAB_00f6a93c;
          }
        }
        else if (local_84 == 3) {
          if (local_90 != 0) {
            lVar6 = (**(code **)(*(long *)param_2 + 0x20))(param_2,8);
            lVar21 = *(long *)(lVar6 + 8);
            uVar5 = (**(code **)(*(long *)param_2 + 0x38))(param_2,lVar21);
            uVar10 = (ulong)local_90;
            puVar19[3] = uVar5;
            if (0 < (int)local_90) {
              puVar17 = (undefined2 *)(local_78 + 4);
              puVar13 = (undefined2 *)(lVar21 + 4);
              do {
                uVar10 = uVar10 - 1;
                puVar13[-2] = puVar17[-2];
                puVar13[-1] = puVar17[-1];
                uVar1 = *puVar17;
                puVar17 = (undefined2 *)((long)puVar17 + (long)local_7c);
                *puVar13 = uVar1;
                puVar13 = puVar13 + 4;
              } while (uVar10 != 0);
            }
            lVar21 = *(long *)param_2;
            uVar5 = *(undefined8 *)(lVar6 + 8);
            pcVar7 = "btShortIntIndexTripletData";
            goto LAB_00f6a93c;
          }
        }
        else if ((local_84 == 2) && (local_90 != 0)) {
          lVar6 = (**(code **)(*(long *)param_2 + 0x20))(param_2,4,local_90 * 3);
          lVar21 = *(long *)(lVar6 + 8);
          uVar5 = (**(code **)(*(long *)param_2 + 0x38))(param_2,lVar21);
          puVar19[2] = uVar5;
          if (0 < (int)local_90) {
            lVar9 = 0;
            puVar12 = (undefined4 *)(lVar21 + 8);
            do {
              iVar8 = (int)lVar9;
              lVar9 = lVar9 + 1;
              puVar16 = (undefined4 *)(local_78 + (long)local_7c * (long)iVar8);
              puVar12[-2] = *puVar16;
              puVar12[-1] = puVar16[1];
              *puVar12 = puVar16[2];
              puVar12 = puVar12 + 3;
            } while (lVar9 < (int)local_90);
          }
          lVar21 = *(long *)param_2;
          uVar5 = *(undefined8 *)(lVar6 + 8);
          pcVar7 = "btIntIndexData";
LAB_00f6a93c:
          (**(code **)(lVar21 + 0x28))(param_2,lVar6,pcVar7,0x59415241,uVar5);
        }
        if (local_80 == 1) {
          if (local_8c != 0) {
            lVar6 = (**(code **)(*(long *)param_2 + 0x20))(param_2,0x20);
            lVar21 = *(long *)(lVar6 + 8);
            uVar5 = (**(code **)(*(long *)param_2 + 0x38))(param_2,lVar21);
            uVar10 = (ulong)local_8c;
            puVar19[1] = uVar5;
            if (0 < (int)local_8c) {
              puVar18 = (undefined8 *)(local_70 + 0x10);
              puVar15 = (undefined8 *)(lVar21 + 0x10);
              do {
                uVar10 = uVar10 - 1;
                puVar15[-2] = puVar18[-2];
                puVar15[-1] = puVar18[-1];
                uVar5 = *puVar18;
                puVar18 = (undefined8 *)((long)puVar18 + (long)local_88);
                *puVar15 = uVar5;
                puVar15 = puVar15 + 4;
              } while (uVar10 != 0);
            }
            lVar21 = *(long *)param_2;
            uVar5 = *(undefined8 *)(lVar6 + 8);
            pcVar7 = "btVector3DoubleData";
            goto LAB_00f6a6d0;
          }
        }
        else if ((local_80 == 0) && (local_8c != 0)) {
          lVar6 = (**(code **)(*(long *)param_2 + 0x20))(param_2,0x10);
          lVar21 = *(long *)(lVar6 + 8);
          uVar5 = (**(code **)(*(long *)param_2 + 0x38))(param_2,lVar21);
          uVar10 = (ulong)local_8c;
          *puVar19 = uVar5;
          if (0 < (int)local_8c) {
            puVar12 = (undefined4 *)(local_70 + 8);
            puVar16 = (undefined4 *)(lVar21 + 8);
            do {
              uVar10 = uVar10 - 1;
              puVar16[-2] = puVar12[-2];
              puVar16[-1] = puVar12[-1];
              uVar22 = *puVar12;
              puVar12 = (undefined4 *)((long)puVar12 + (long)local_88);
              *puVar16 = uVar22;
              puVar16 = puVar16 + 4;
            } while (uVar10 != 0);
          }
          lVar21 = *(long *)param_2;
          uVar5 = *(undefined8 *)(lVar6 + 8);
          pcVar7 = "btVector3FloatData";
LAB_00f6a6d0:
          (**(code **)(lVar21 + 0x28))(param_2,lVar6,pcVar7,0x59415241,uVar5);
        }
        (**(code **)(*(long *)this + 0x30))(this,iVar20);
        iVar20 = iVar20 + 1;
        puVar19 = puVar19 + 7;
      } while (iVar20 != iVar3);
    }
    (**(code **)(*(long *)param_2 + 0x28))
              (param_2,lVar4,"btMeshPartData",0x59415241,*(undefined8 *)(lVar4 + 8));
  }
  *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)(this + 8);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)((long)param_1 + 0x10) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(this + 0x14);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return "btStridingMeshInterfaceData";
}


