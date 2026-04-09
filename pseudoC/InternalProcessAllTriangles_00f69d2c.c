// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InternalProcessAllTriangles
// Entry Point: 00f69d2c
// Size: 1616 bytes
// Signature: undefined __cdecl InternalProcessAllTriangles(btInternalTriangleIndexCallback * param_1, btVector3 * param_2, btVector3 * param_3)


/* btStridingMeshInterface::InternalProcessAllTriangles(btInternalTriangleIndexCallback*, btVector3
   const&, btVector3 const&) const */

void btStridingMeshInterface::InternalProcessAllTriangles
               (btInternalTriangleIndexCallback *param_1,btVector3 *param_2,btVector3 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  byte *pbVar4;
  ushort *puVar5;
  int *piVar6;
  long lVar7;
  undefined8 *puVar8;
  double *pdVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  int local_c0;
  undefined auStack_bc [4];
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  float local_90;
  undefined4 local_8c;
  undefined8 local_88;
  float local_80;
  undefined4 local_7c;
  undefined8 local_78;
  float local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar3 = (**(code **)(*(long *)param_1 + 0x38))();
  if (0 < iVar3) {
    iVar10 = 0;
    uVar13 = *(undefined8 *)(param_1 + 8);
    fVar15 = *(float *)(param_1 + 0x10);
    do {
      (**(code **)(*(long *)param_1 + 0x20))
                (param_1,&local_a0,auStack_bc,&local_b0,&local_b8,&local_a8,&local_ac,&local_c0,
                 &local_b4,iVar10);
      fVar12 = (float)uVar13;
      fVar14 = (float)((ulong)uVar13 >> 0x20);
      if (local_b0 == 1) {
        if (local_b4 == 2) {
          if (0 < local_c0) {
            iVar11 = 0;
            do {
              piVar6 = (int *)(local_a8 + (long)local_ac * (long)iVar11);
              pdVar9 = (double *)(local_a0 + (ulong)(uint)(local_b8 * *piVar6));
              local_8c = 0;
              local_90 = fVar15 * (float)pdVar9[2];
              local_98 = CONCAT44(fVar14 * (float)pdVar9[1],fVar12 * (float)*pdVar9);
              pdVar9 = (double *)(local_a0 + (ulong)(uint)(piVar6[1] * local_b8));
              local_7c = 0;
              local_80 = fVar15 * (float)pdVar9[2];
              local_88 = CONCAT44(fVar14 * (float)pdVar9[1],fVar12 * (float)*pdVar9);
              pdVar9 = (double *)(local_a0 + (ulong)(uint)(piVar6[2] * local_b8));
              local_6c = 0;
              local_70 = fVar15 * (float)pdVar9[2];
              local_78 = CONCAT44(fVar14 * (float)pdVar9[1],fVar12 * (float)*pdVar9);
              (**(code **)(*(long *)param_2 + 0x10))(param_2,&local_98,iVar10,iVar11);
              iVar11 = iVar11 + 1;
            } while (iVar11 < local_c0);
          }
        }
        else if (local_b4 == 3) {
          if (0 < local_c0) {
            iVar11 = 0;
            do {
              puVar5 = (ushort *)(local_a8 + (long)local_ac * (long)iVar11);
              lVar7 = (long)local_b8;
              pdVar9 = (double *)(local_a0 + lVar7 * (ulong)*puVar5);
              local_8c = 0;
              local_90 = fVar15 * (float)pdVar9[2];
              local_98 = CONCAT44(fVar14 * (float)pdVar9[1],fVar12 * (float)*pdVar9);
              pdVar9 = (double *)(local_a0 + lVar7 * (ulong)puVar5[1]);
              local_7c = 0;
              local_80 = fVar15 * (float)pdVar9[2];
              local_88 = CONCAT44(fVar14 * (float)pdVar9[1],fVar12 * (float)*pdVar9);
              pdVar9 = (double *)(local_a0 + lVar7 * (ulong)puVar5[2]);
              local_6c = 0;
              local_70 = fVar15 * (float)pdVar9[2];
              local_78 = CONCAT44(fVar14 * (float)pdVar9[1],fVar12 * (float)*pdVar9);
              (**(code **)(*(long *)param_2 + 0x10))(param_2,&local_98,iVar10,iVar11);
              iVar11 = iVar11 + 1;
            } while (iVar11 < local_c0);
          }
        }
        else if ((local_b4 == 5) && (0 < local_c0)) {
          iVar11 = 0;
          do {
            pbVar4 = (byte *)(local_a8 + (long)local_ac * (long)iVar11);
            lVar7 = (long)local_b8;
            pdVar9 = (double *)(local_a0 + lVar7 * (ulong)*pbVar4);
            local_8c = 0;
            local_90 = fVar15 * (float)pdVar9[2];
            local_98 = CONCAT44(fVar14 * (float)pdVar9[1],fVar12 * (float)*pdVar9);
            pdVar9 = (double *)(local_a0 + lVar7 * (ulong)pbVar4[1]);
            local_7c = 0;
            local_80 = fVar15 * (float)pdVar9[2];
            local_88 = CONCAT44(fVar14 * (float)pdVar9[1],fVar12 * (float)*pdVar9);
            pdVar9 = (double *)(local_a0 + lVar7 * (ulong)pbVar4[2]);
            local_6c = 0;
            local_70 = fVar15 * (float)pdVar9[2];
            local_78 = CONCAT44(fVar14 * (float)pdVar9[1],fVar12 * (float)*pdVar9);
            (**(code **)(*(long *)param_2 + 0x10))(param_2,&local_98,iVar10,iVar11);
            iVar11 = iVar11 + 1;
          } while (iVar11 < local_c0);
        }
      }
      else if (local_b0 == 0) {
        if (local_b4 == 2) {
          if (0 < local_c0) {
            iVar11 = 0;
            do {
              piVar6 = (int *)(local_a8 + (long)local_ac * (long)iVar11);
              puVar8 = (undefined8 *)(local_a0 + (ulong)(uint)(local_b8 * *piVar6));
              uVar2 = *puVar8;
              local_8c = 0;
              local_90 = *(float *)(puVar8 + 1) * fVar15;
              local_98 = CONCAT44((float)((ulong)uVar2 >> 0x20) * fVar14,(float)uVar2 * fVar12);
              puVar8 = (undefined8 *)(local_a0 + (ulong)(uint)(piVar6[1] * local_b8));
              uVar2 = *puVar8;
              local_7c = 0;
              local_80 = *(float *)(puVar8 + 1) * fVar15;
              local_88 = CONCAT44((float)((ulong)uVar2 >> 0x20) * fVar14,(float)uVar2 * fVar12);
              puVar8 = (undefined8 *)(local_a0 + (ulong)(uint)(piVar6[2] * local_b8));
              uVar2 = *puVar8;
              local_6c = 0;
              local_70 = *(float *)(puVar8 + 1) * fVar15;
              local_78 = CONCAT44((float)((ulong)uVar2 >> 0x20) * fVar14,(float)uVar2 * fVar12);
              (**(code **)(*(long *)param_2 + 0x10))(param_2,&local_98,iVar10,iVar11);
              iVar11 = iVar11 + 1;
            } while (iVar11 < local_c0);
          }
        }
        else if (local_b4 == 3) {
          if (0 < local_c0) {
            iVar11 = 0;
            do {
              puVar5 = (ushort *)(local_a8 + (long)local_ac * (long)iVar11);
              lVar7 = (long)local_b8;
              puVar8 = (undefined8 *)(local_a0 + lVar7 * (ulong)*puVar5);
              uVar2 = *puVar8;
              local_8c = 0;
              local_90 = *(float *)(puVar8 + 1) * fVar15;
              local_98 = CONCAT44((float)((ulong)uVar2 >> 0x20) * fVar14,(float)uVar2 * fVar12);
              puVar8 = (undefined8 *)(local_a0 + lVar7 * (ulong)puVar5[1]);
              uVar2 = *puVar8;
              local_7c = 0;
              local_80 = *(float *)(puVar8 + 1) * fVar15;
              local_88 = CONCAT44((float)((ulong)uVar2 >> 0x20) * fVar14,(float)uVar2 * fVar12);
              puVar8 = (undefined8 *)(local_a0 + lVar7 * (ulong)puVar5[2]);
              uVar2 = *puVar8;
              local_6c = 0;
              local_70 = *(float *)(puVar8 + 1) * fVar15;
              local_78 = CONCAT44((float)((ulong)uVar2 >> 0x20) * fVar14,(float)uVar2 * fVar12);
              (**(code **)(*(long *)param_2 + 0x10))(param_2,&local_98,iVar10,iVar11);
              iVar11 = iVar11 + 1;
            } while (iVar11 < local_c0);
          }
        }
        else if ((local_b4 == 5) && (0 < local_c0)) {
          iVar11 = 0;
          do {
            pbVar4 = (byte *)(local_a8 + (long)local_ac * (long)iVar11);
            lVar7 = (long)local_b8;
            puVar8 = (undefined8 *)(local_a0 + lVar7 * (ulong)*pbVar4);
            uVar2 = *puVar8;
            local_8c = 0;
            local_90 = *(float *)(puVar8 + 1) * fVar15;
            local_98 = CONCAT44((float)((ulong)uVar2 >> 0x20) * fVar14,(float)uVar2 * fVar12);
            puVar8 = (undefined8 *)(local_a0 + lVar7 * (ulong)pbVar4[1]);
            uVar2 = *puVar8;
            local_7c = 0;
            local_80 = *(float *)(puVar8 + 1) * fVar15;
            local_88 = CONCAT44((float)((ulong)uVar2 >> 0x20) * fVar14,(float)uVar2 * fVar12);
            puVar8 = (undefined8 *)(local_a0 + lVar7 * (ulong)pbVar4[2]);
            uVar2 = *puVar8;
            local_6c = 0;
            local_70 = *(float *)(puVar8 + 1) * fVar15;
            local_78 = CONCAT44((float)((ulong)uVar2 >> 0x20) * fVar14,(float)uVar2 * fVar12);
            (**(code **)(*(long *)param_2 + 0x10))(param_2,&local_98,iVar10,iVar11);
            iVar11 = iVar11 + 1;
          } while (iVar11 < local_c0);
        }
      }
      (**(code **)(*(long *)param_1 + 0x30))(param_1,iVar10);
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar3);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


