// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: th_decode_alloc
// Entry Point: 00dede50
// Size: 592 bytes
// Signature: undefined th_decode_alloc(void)


void * th_decode_alloc(long param_1,long param_2)

{
  int iVar1;
  void *__ptr;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    __ptr = malloc(0xe188);
    if ((__ptr != (void *)0x0) && (iVar1 = oc_state_init(__ptr,param_1,3), -1 < iVar1)) {
      iVar1 = oc_huff_trees_copy((long)__ptr + 0xd078,param_2);
      if (-1 < iVar1) {
        pvVar2 = malloc(*(long *)((long)__ptr + 0x128) * 0x81);
        *(void **)((long)__ptr + 0xdef8) = pvVar2;
        if (pvVar2 != (void *)0x0) {
          lVar3 = 0;
          lVar4 = 0x410;
          do {
            lVar6 = (long)__ptr + lVar3 + 0x1190;
            plVar5 = (long *)((long)__ptr + lVar4);
            lVar3 = lVar3 + 0x300;
            lVar4 = lVar4 + 0x30;
            *plVar5 = lVar6 + -0x180;
            plVar5[1] = lVar6 + -0x100;
            plVar5[2] = lVar6 + -0x80;
            plVar5[3] = lVar6;
            plVar5[4] = lVar6 + 0x80;
            plVar5[5] = lVar6 + 0x100;
          } while (lVar3 != 0xc000);
          oc_dequant_tables_init((long)__ptr + 0x410,(long)__ptr + 0xdf10,param_2 + 0x280);
          lVar3 = 0;
          plVar5 = (long *)((long)__ptr + 0x460);
          do {
            lVar6 = plVar5[-10];
            lVar10 = plVar5[-4];
            lVar7 = plVar5[-8];
            lVar4 = plVar5[-6];
            lVar9 = plVar5[-2];
            lVar8 = *plVar5;
            *(uint *)((long)__ptr + lVar3 + 0xe010) =
                 -((uint)*(ushort *)(lVar7 + 0x22) + (uint)*(ushort *)(lVar7 + 0x18) +
                   (uint)*(ushort *)(lVar7 + 0x24) + (uint)*(ushort *)(lVar7 + 0x30) +
                   (uint)*(ushort *)(lVar4 + 0x18) + (uint)*(ushort *)(lVar4 + 0x22) +
                   (uint)*(ushort *)(lVar4 + 0x24) + (uint)*(ushort *)(lVar4 + 0x30) +
                   (uint)*(ushort *)(lVar9 + 0x18) + (uint)*(ushort *)(lVar9 + 0x22) +
                   ((uint)*(ushort *)(lVar6 + 0x22) + (uint)*(ushort *)(lVar6 + 0x18) +
                    (uint)*(ushort *)(lVar6 + 0x24) + (uint)*(ushort *)(lVar6 + 0x30) +
                    (uint)*(ushort *)(lVar10 + 0x18) + (uint)*(ushort *)(lVar10 + 0x22) +
                    (uint)*(ushort *)(lVar10 + 0x24) + (uint)*(ushort *)(lVar10 + 0x30)) * 2 +
                   (uint)*(ushort *)(lVar9 + 0x24) + (uint)*(ushort *)(lVar9 + 0x30) +
                   (uint)*(ushort *)(lVar8 + 0x18) + (uint)*(ushort *)(lVar8 + 0x22) +
                   (uint)*(ushort *)(lVar8 + 0x24) + (uint)*(ushort *)(lVar8 + 0x30) >> 0xb);
            lVar3 = lVar3 + 4;
            plVar5 = plVar5 + 1;
          } while (lVar3 != 0x100);
          uVar12 = *(undefined8 *)(param_2 + 0x388);
          uVar11 = *(undefined8 *)(param_2 + 0x380);
          uVar14 = *(undefined8 *)(param_2 + 0x398);
          uVar13 = *(undefined8 *)(param_2 + 0x390);
          *(undefined8 *)((long)__ptr + 0x3f8) = 0;
          *(undefined8 *)((long)__ptr + 0xd018) = uVar12;
          *(undefined8 *)((long)__ptr + 0xd010) = uVar11;
          *(undefined4 *)((long)__ptr + 0xdf0c) = 0;
          uVar16 = *(undefined8 *)(param_2 + 0x3a8);
          uVar15 = *(undefined8 *)(param_2 + 0x3a0);
          uVar12 = *(undefined8 *)(param_2 + 0x3b8);
          uVar11 = *(undefined8 *)(param_2 + 0x3b0);
          *(undefined8 *)((long)__ptr + 0xd028) = uVar14;
          *(undefined8 *)((long)__ptr + 0xd020) = uVar13;
          *(undefined8 *)((long)__ptr + 0xe110) = 0;
          *(undefined8 *)((long)__ptr + 0xd038) = uVar16;
          *(undefined8 *)((long)__ptr + 0xd030) = uVar15;
          *(undefined8 *)((long)__ptr + 0xe180) = 0;
          *(undefined8 *)((long)__ptr + 0xe178) = 0;
          *(undefined8 *)((long)__ptr + 0xd048) = uVar12;
          *(undefined8 *)((long)__ptr + 0xd040) = uVar11;
          *(undefined8 *)((long)__ptr + 0xe120) = 0;
          *(undefined8 *)((long)__ptr + 0xe118) = 0;
          return __ptr;
        }
        oc_huff_trees_clear((long)__ptr + 0xd078);
      }
      oc_state_clear(__ptr);
    }
    free(__ptr);
    return (void *)0x0;
  }
  return (void *)0x0;
}


