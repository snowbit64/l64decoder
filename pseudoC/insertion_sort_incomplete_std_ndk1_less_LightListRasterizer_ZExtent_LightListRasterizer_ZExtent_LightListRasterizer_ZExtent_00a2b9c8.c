// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<std::__ndk1::__less<LightListRasterizer::ZExtent,LightListRasterizer::ZExtent>&,LightListRasterizer::ZExtent*>
// Entry Point: 00a2b9c8
// Size: 808 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<std::__ndk1::__less<LightListRasterizer::ZExtent,LightListRasterizer::ZExtent>&,LightListRasterizer::ZExtent*>(ZExtent * param_1, ZExtent * param_2, __less * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<LightListRasterizer::ZExtent,
   LightListRasterizer::ZExtent>&, LightListRasterizer::ZExtent*>(LightListRasterizer::ZExtent*,
   LightListRasterizer::ZExtent*, std::__ndk1::__less<LightListRasterizer::ZExtent,
   LightListRasterizer::ZExtent>&) */

bool std::__ndk1::
     __insertion_sort_incomplete<std::__ndk1::__less<LightListRasterizer::ZExtent,LightListRasterizer::ZExtent>&,LightListRasterizer::ZExtent*>
               (ZExtent *param_1,ZExtent *param_2,__less *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  
  lVar4 = tpidr_el0;
  uVar6 = ((long)param_2 - (long)param_1 >> 2) * -0x5555555555555555;
  lVar9 = *(long *)(lVar4 + 0x28);
  if (uVar6 < 6) {
    bVar5 = true;
    switch(uVar6) {
    default:
      goto switchD_00a2ba2c_caseD_0;
    case 2:
      if ((*(uint *)(param_2 + -8) < *(uint *)(param_1 + 4)) ||
         ((*(uint *)(param_2 + -8) <= *(uint *)(param_1 + 4) &&
          (*(uint *)(param_2 + -4) < *(uint *)(param_1 + 8))))) {
        uVar12 = *(undefined8 *)param_1;
        uVar2 = *(undefined4 *)(param_1 + 8);
        bVar5 = true;
        uVar3 = *(undefined4 *)(param_2 + -4);
        *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -0xc);
        *(undefined4 *)(param_1 + 8) = uVar3;
        *(undefined8 *)(param_2 + -0xc) = uVar12;
        *(undefined4 *)(param_2 + -4) = uVar2;
        goto switchD_00a2ba2c_caseD_0;
      }
      break;
    case 3:
      __sort3<std::__ndk1::__less<LightListRasterizer::ZExtent,LightListRasterizer::ZExtent>&,LightListRasterizer::ZExtent*>
                (param_1,param_1 + 0xc,param_2 + -0xc,param_3);
      break;
    case 4:
      puVar14 = (undefined8 *)(param_1 + 0xc);
      puVar13 = (undefined8 *)(param_1 + 0x18);
      __sort3<std::__ndk1::__less<LightListRasterizer::ZExtent,LightListRasterizer::ZExtent>&,LightListRasterizer::ZExtent*>
                (param_1,(ZExtent *)puVar14,(ZExtent *)puVar13,param_3);
      if ((*(uint *)(param_2 + -8) < *(uint *)(param_1 + 0x1c)) ||
         ((*(uint *)(param_2 + -8) <= *(uint *)(param_1 + 0x1c) &&
          (*(uint *)(param_2 + -4) < *(uint *)(param_1 + 0x20))))) {
        uVar12 = *puVar13;
        uVar2 = *(undefined4 *)(param_1 + 0x20);
        uVar3 = *(undefined4 *)(param_2 + -4);
        *puVar13 = *(undefined8 *)(param_2 + -0xc);
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        *(undefined8 *)(param_2 + -0xc) = uVar12;
        *(undefined4 *)(param_2 + -4) = uVar2;
        if ((*(uint *)(param_1 + 0x1c) < *(uint *)(param_1 + 0x10)) ||
           ((*(uint *)(param_1 + 0x1c) <= *(uint *)(param_1 + 0x10) &&
            (*(uint *)(param_1 + 0x20) < *(uint *)(param_1 + 0x14))))) {
          uVar12 = *puVar14;
          *puVar14 = *puVar13;
          uVar2 = *(undefined4 *)(param_1 + 0x14);
          *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x20);
          *puVar13 = uVar12;
          *(undefined4 *)(param_1 + 0x20) = uVar2;
          if ((*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 4)) ||
             ((*(uint *)(param_1 + 0x10) <= *(uint *)(param_1 + 4) &&
              (*(uint *)(param_1 + 0x14) < *(uint *)(param_1 + 8))))) {
            bVar5 = true;
            uVar12 = *(undefined8 *)param_1;
            uVar2 = *(undefined4 *)(param_1 + 8);
            *(undefined8 *)param_1 = *puVar14;
            *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x14);
            *puVar14 = uVar12;
            *(undefined4 *)(param_1 + 0x14) = uVar2;
            goto switchD_00a2ba2c_caseD_0;
          }
        }
      }
      break;
    case 5:
      FUN_00a2b738(param_1,param_1 + 0xc,param_1 + 0x18,param_1 + 0x24,param_2 + -0xc);
    }
  }
  else {
    __sort3<std::__ndk1::__less<LightListRasterizer::ZExtent,LightListRasterizer::ZExtent>&,LightListRasterizer::ZExtent*>
              (param_1,param_1 + 0xc,param_1 + 0x18,param_3);
    if (param_1 + 0x24 != param_2) {
      lVar7 = 0;
      iVar8 = 0;
      puVar14 = (undefined8 *)(param_1 + 0x24);
      puVar13 = (undefined8 *)(param_1 + 0x18);
      do {
        puVar10 = puVar14;
        uVar1 = *(uint *)((long)puVar10 + 4);
        if (uVar1 < *(uint *)((long)puVar13 + 4)) {
          uVar11 = *(uint *)(puVar10 + 1);
LAB_00a2bb0c:
          uVar2 = *(undefined4 *)(puVar13 + 1);
          uVar3 = *(undefined4 *)puVar10;
          *puVar10 = *puVar13;
          *(undefined4 *)(puVar10 + 1) = uVar2;
          puVar14 = (undefined8 *)param_1;
          lVar16 = lVar7;
          if (puVar13 != (undefined8 *)param_1) {
            do {
              if (*(uint *)(param_1 + lVar16 + 0x10) <= uVar1) {
                puVar14 = puVar13;
                if (*(uint *)(param_1 + lVar16 + 0x10) < uVar1) break;
                if (*(uint *)(param_1 + lVar16 + 0x14) <= uVar11) {
                  puVar14 = (undefined8 *)(param_1 + lVar16 + 0x18);
                  break;
                }
              }
              puVar13 = (undefined8 *)((long)puVar13 + -0xc);
              lVar15 = lVar16 + -0xc;
              *(undefined8 *)(param_1 + lVar16 + 0x18) = *(undefined8 *)(param_1 + lVar16 + 0xc);
              *(undefined4 *)(param_1 + lVar16 + 0x20) = *(undefined4 *)(param_1 + lVar16 + 0x14);
              puVar14 = (undefined8 *)param_1;
              lVar16 = lVar15;
            } while (lVar15 != -0x18);
          }
          iVar8 = iVar8 + 1;
          *(undefined4 *)puVar14 = uVar3;
          *(uint *)((long)puVar14 + 4) = uVar1;
          *(uint *)(puVar14 + 1) = uVar11;
          if (iVar8 == 8) {
            bVar5 = (undefined4 *)((long)puVar10 + 0xc) == (undefined4 *)param_2;
            goto switchD_00a2ba2c_caseD_0;
          }
        }
        else if ((uVar1 <= *(uint *)((long)puVar13 + 4)) &&
                (uVar11 = *(uint *)(puVar10 + 1), uVar11 < *(uint *)(puVar13 + 1)))
        goto LAB_00a2bb0c;
        lVar7 = lVar7 + 0xc;
        puVar14 = (undefined8 *)((long)puVar10 + 0xc);
        puVar13 = puVar10;
      } while ((undefined8 *)((long)puVar10 + 0xc) != (undefined8 *)param_2);
    }
  }
  bVar5 = true;
switchD_00a2ba2c_caseD_0:
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}


