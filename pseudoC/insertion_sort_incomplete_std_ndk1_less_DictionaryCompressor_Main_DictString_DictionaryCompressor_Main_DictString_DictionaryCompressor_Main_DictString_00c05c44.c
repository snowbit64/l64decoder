// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<std::__ndk1::__less<DictionaryCompressor::Main::DictString,DictionaryCompressor::Main::DictString>&,DictionaryCompressor::Main::DictString*>
// Entry Point: 00c05c44
// Size: 1120 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<std::__ndk1::__less<DictionaryCompressor::Main::DictString,DictionaryCompressor::Main::DictString>&,DictionaryCompressor::Main::DictString*>(DictString * param_1, DictString * param_2, __less * param_3)


/* bool 
   std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<DictionaryCompressor::Main::DictString,
   DictionaryCompressor::Main::DictString>&,
   DictionaryCompressor::Main::DictString*>(DictionaryCompressor::Main::DictString*,
   DictionaryCompressor::Main::DictString*,
   std::__ndk1::__less<DictionaryCompressor::Main::DictString,
   DictionaryCompressor::Main::DictString>&) */

bool std::__ndk1::
     __insertion_sort_incomplete<std::__ndk1::__less<DictionaryCompressor::Main::DictString,DictionaryCompressor::Main::DictString>&,DictionaryCompressor::Main::DictString*>
               (DictString *param_1,DictString *param_2,__less *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  ushort *puVar17;
  long lVar18;
  undefined8 *puVar19;
  
  lVar6 = tpidr_el0;
  uVar9 = ((long)param_2 - (long)param_1 >> 2) * -0x5555555555555555;
  lVar15 = *(long *)(lVar6 + 0x28);
  if (uVar9 < 6) {
    bVar8 = true;
    switch(uVar9) {
    default:
      goto switchD_00c05cac_caseD_0;
    case 2:
      if (*(ushort *)(param_2 + -0xc) < *(ushort *)param_1) {
LAB_00c05ce4:
        bVar8 = true;
        uVar2 = *(undefined4 *)(param_2 + -4);
        uVar16 = *(undefined8 *)param_1;
        uVar3 = *(undefined4 *)(param_1 + 8);
        *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -0xc);
        *(undefined4 *)(param_1 + 8) = uVar2;
        *(undefined8 *)(param_2 + -0xc) = uVar16;
        *(undefined4 *)(param_2 + -4) = uVar3;
        goto switchD_00c05cac_caseD_0;
      }
      break;
    case 3:
      puVar11 = (undefined8 *)(param_2 + -0xc);
      puVar10 = (undefined8 *)(param_1 + 0xc);
      uVar4 = *(ushort *)puVar10;
      if (uVar4 < *(ushort *)param_1) {
        if (*(ushort *)puVar11 < uVar4) goto LAB_00c05ce4;
        uVar16 = *(undefined8 *)param_1;
        uVar2 = *(undefined4 *)(param_1 + 8);
        *(undefined8 *)param_1 = *puVar10;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x14);
        *puVar10 = uVar16;
        *(undefined4 *)(param_1 + 0x14) = uVar2;
        if (*(ushort *)puVar11 < *(ushort *)(param_1 + 0xc)) {
          bVar8 = true;
          uVar2 = *(undefined4 *)(param_2 + -4);
          uVar16 = *puVar10;
          uVar3 = *(undefined4 *)(param_1 + 0x14);
          *puVar10 = *puVar11;
          *(undefined4 *)(param_1 + 0x14) = uVar2;
          *puVar11 = uVar16;
          *(undefined4 *)(param_2 + -4) = uVar3;
          goto switchD_00c05cac_caseD_0;
        }
      }
      else if (*(ushort *)puVar11 < uVar4) {
        uVar2 = *(undefined4 *)(param_2 + -4);
        uVar16 = *puVar10;
        uVar3 = *(undefined4 *)(param_1 + 0x14);
        *puVar10 = *puVar11;
        *(undefined4 *)(param_1 + 0x14) = uVar2;
        *puVar11 = uVar16;
        *(undefined4 *)(param_2 + -4) = uVar3;
        if (*(ushort *)(param_1 + 0xc) < *(ushort *)param_1) {
          bVar8 = true;
          uVar16 = *(undefined8 *)param_1;
          uVar2 = *(undefined4 *)(param_1 + 8);
          *(undefined8 *)param_1 = *puVar10;
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x14);
          *puVar10 = uVar16;
          *(undefined4 *)(param_1 + 0x14) = uVar2;
          goto switchD_00c05cac_caseD_0;
        }
      }
      break;
    case 4:
      __sort4<std::__ndk1::__less<DictionaryCompressor::Main::DictString,DictionaryCompressor::Main::DictString>&,DictionaryCompressor::Main::DictString*>
                (param_1,param_1 + 0xc,param_1 + 0x18,param_2 + -0xc,param_3);
      break;
    case 5:
      puVar10 = (undefined8 *)(param_1 + 0xc);
      puVar11 = (undefined8 *)(param_1 + 0x18);
      puVar1 = (undefined8 *)(param_1 + 0x24);
      __sort4<std::__ndk1::__less<DictionaryCompressor::Main::DictString,DictionaryCompressor::Main::DictString>&,DictionaryCompressor::Main::DictString*>
                (param_1,(DictString *)puVar10,(DictString *)puVar11,(DictString *)puVar1,param_3);
      puVar19 = (undefined8 *)(param_2 + -0xc);
      if (*(ushort *)puVar19 < *(ushort *)(param_1 + 0x24)) {
        uVar2 = *(undefined4 *)(param_2 + -4);
        uVar16 = *puVar1;
        uVar3 = *(undefined4 *)(param_1 + 0x2c);
        *puVar1 = *puVar19;
        *(undefined4 *)(param_1 + 0x2c) = uVar2;
        *puVar19 = uVar16;
        *(undefined4 *)(param_2 + -4) = uVar3;
        if (*(ushort *)puVar1 < *(ushort *)puVar11) {
          uVar16 = *puVar1;
          uVar12 = *puVar11;
          *puVar11 = uVar16;
          uVar2 = *(undefined4 *)(param_1 + 0x20);
          *puVar1 = uVar12;
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x2c);
          *(undefined4 *)(param_1 + 0x2c) = uVar2;
          if (((uint)uVar16 & 0xffff) < (uint)*(ushort *)puVar10) {
            uVar16 = *puVar10;
            *puVar10 = *puVar11;
            uVar2 = *(undefined4 *)(param_1 + 0x14);
            *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x20);
            *puVar11 = uVar16;
            *(undefined4 *)(param_1 + 0x20) = uVar2;
            if (*(ushort *)(param_1 + 0xc) < *(ushort *)param_1) {
              bVar8 = true;
              uVar16 = *(undefined8 *)param_1;
              uVar2 = *(undefined4 *)(param_1 + 8);
              *(undefined8 *)param_1 = *puVar10;
              *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x14);
              *puVar10 = uVar16;
              *(undefined4 *)(param_1 + 0x14) = uVar2;
              goto switchD_00c05cac_caseD_0;
            }
          }
        }
      }
    }
  }
  else {
    puVar11 = (undefined8 *)(param_1 + 0xc);
    uVar4 = *(ushort *)puVar11;
    puVar10 = (undefined8 *)(param_1 + 0x18);
    uVar5 = *(ushort *)puVar10;
    if (uVar4 < *(ushort *)param_1) {
      if (uVar5 < uVar4) {
        uVar16 = *(undefined8 *)param_1;
        uVar2 = *(undefined4 *)(param_1 + 8);
        *(undefined8 *)param_1 = *puVar10;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x20);
        *puVar10 = uVar16;
        *(undefined4 *)(param_1 + 0x20) = uVar2;
      }
      else {
        uVar16 = *puVar11;
        *puVar11 = *(undefined8 *)param_1;
        uVar2 = *(undefined4 *)(param_1 + 0x14);
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 8);
        *(undefined8 *)param_1 = uVar16;
        *(undefined4 *)(param_1 + 8) = uVar2;
        if (uVar5 < *(ushort *)(param_1 + 0xc)) {
          uVar16 = *puVar11;
          uVar2 = *(undefined4 *)(param_1 + 0x14);
          *puVar11 = *puVar10;
          *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x20);
          *puVar10 = uVar16;
          *(undefined4 *)(param_1 + 0x20) = uVar2;
        }
      }
    }
    else if (uVar5 < uVar4) {
      uVar16 = *puVar11;
      *puVar11 = *puVar10;
      uVar2 = *(undefined4 *)(param_1 + 0x20);
      *puVar10 = uVar16;
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = uVar2;
      if (*(ushort *)puVar11 < *(ushort *)param_1) {
        uVar16 = *(undefined8 *)param_1;
        uVar2 = *(undefined4 *)(param_1 + 8);
        *(undefined8 *)param_1 = *puVar11;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x14);
        *puVar11 = uVar16;
        *(undefined4 *)(param_1 + 0x14) = uVar2;
      }
    }
    if (param_1 + 0x24 != param_2) {
      lVar13 = 0;
      iVar14 = 0;
      puVar11 = (undefined8 *)(param_1 + 0x24);
      do {
        uVar4 = *(ushort *)puVar11;
        if (uVar4 < *(ushort *)puVar10) {
          uVar16 = *(undefined8 *)((long)puVar11 + 2);
          uVar5 = *(ushort *)((long)puVar11 + 10);
          lVar7 = lVar13;
          do {
            lVar18 = lVar7;
            *(undefined8 *)(param_1 + lVar18 + 0x24) = *(undefined8 *)(param_1 + lVar18 + 0x18);
            *(undefined4 *)(param_1 + lVar18 + 0x2c) = *(undefined4 *)(param_1 + lVar18 + 0x20);
            puVar17 = (ushort *)param_1;
            if (lVar18 == -0x18) goto LAB_00c05fcc;
            lVar7 = lVar18 + -0xc;
          } while (uVar4 < *(ushort *)(param_1 + lVar18 + 0xc));
          puVar17 = (ushort *)(param_1 + lVar18 + 0x18);
LAB_00c05fcc:
          iVar14 = iVar14 + 1;
          *puVar17 = uVar4;
          *(undefined8 *)(puVar17 + 1) = uVar16;
          puVar17[5] = uVar5;
          if (iVar14 == 8) {
            bVar8 = (ushort *)((long)puVar11 + 0xc) == (ushort *)param_2;
            goto switchD_00c05cac_caseD_0;
          }
        }
        puVar1 = (undefined8 *)((long)puVar11 + 0xc);
        lVar13 = lVar13 + 0xc;
        puVar10 = puVar11;
        puVar11 = puVar1;
      } while (puVar1 != (undefined8 *)param_2);
    }
  }
  bVar8 = true;
switchD_00c05cac_caseD_0:
  if (*(long *)(lVar6 + 0x28) != lVar15) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar8;
}


