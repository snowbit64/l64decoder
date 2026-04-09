// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<std::__ndk1::__less<DictionaryCreator::Main::Character,DictionaryCreator::Main::Character>&,DictionaryCreator::Main::Character*>
// Entry Point: 00c029f8
// Size: 740 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<std::__ndk1::__less<DictionaryCreator::Main::Character,DictionaryCreator::Main::Character>&,DictionaryCreator::Main::Character*>(Character * param_1, Character * param_2, __less * param_3)


/* bool 
   std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<DictionaryCreator::Main::Character,
   DictionaryCreator::Main::Character>&,
   DictionaryCreator::Main::Character*>(DictionaryCreator::Main::Character*,
   DictionaryCreator::Main::Character*, std::__ndk1::__less<DictionaryCreator::Main::Character,
   DictionaryCreator::Main::Character>&) */

bool std::__ndk1::
     __insertion_sort_incomplete<std::__ndk1::__less<DictionaryCreator::Main::Character,DictionaryCreator::Main::Character>&,DictionaryCreator::Main::Character*>
               (Character *param_1,Character *param_2,__less *param_3)

{
  Character CVar1;
  Character CVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined auVar12 [16];
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    if ((byte)param_2[-8] < (byte)*param_1) {
      uVar5 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(param_2 + -8) = uVar5;
      return true;
    }
    break;
  case 3:
    CVar1 = param_1[8];
    if ((byte)CVar1 < (byte)*param_1) {
      uVar5 = *(undefined8 *)param_1;
      if ((byte)param_2[-8] < (byte)CVar1) {
        *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -8);
        *(undefined8 *)(param_2 + -8) = uVar5;
        return true;
      }
      *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = uVar5;
      if ((byte)param_2[-8] < (byte)SUB81(uVar5,0)) {
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -8);
        *(undefined8 *)(param_2 + -8) = uVar5;
        return true;
      }
    }
    else if ((byte)param_2[-8] < (byte)CVar1) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(param_2 + -8) = uVar5;
      if ((byte)param_1[8] < (byte)*param_1) {
        auVar12 = NEON_ext(*(undefined (*) [16])param_1,*(undefined (*) [16])param_1,8,1);
        *(long *)(param_1 + 8) = auVar12._8_8_;
        *(long *)param_1 = auVar12._0_8_;
        return true;
      }
    }
    break;
  case 4:
    __sort4<std::__ndk1::__less<DictionaryCreator::Main::Character,DictionaryCreator::Main::Character>&,DictionaryCreator::Main::Character*>
              (param_1,param_1 + 8,param_1 + 0x10,param_2 + -8,param_3);
    break;
  case 5:
    puVar6 = (undefined8 *)(param_1 + 0x10);
    puVar11 = (undefined8 *)(param_1 + 0x18);
    __sort4<std::__ndk1::__less<DictionaryCreator::Main::Character,DictionaryCreator::Main::Character>&,DictionaryCreator::Main::Character*>
              (param_1,param_1 + 8,(Character *)puVar6,(Character *)puVar11,param_3);
    if ((byte)param_2[-8] < (byte)param_1[0x18]) {
      uVar5 = *puVar11;
      *puVar11 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(param_2 + -8) = uVar5;
      if ((byte)*(Character *)puVar11 < (byte)*(Character *)puVar6) {
        uVar5 = *puVar11;
        uVar9 = *puVar6;
        uVar4 = (uint)uVar5 & 0xff;
        *puVar6 = uVar5;
        *puVar11 = uVar9;
        if (uVar4 < (byte)param_1[8]) {
          uVar9 = *(undefined8 *)(param_1 + 8);
          *(undefined8 *)(param_1 + 8) = uVar5;
          *(undefined8 *)(param_1 + 0x10) = uVar9;
          if (uVar4 < (byte)*param_1) {
            uVar9 = *(undefined8 *)param_1;
            *(undefined8 *)param_1 = uVar5;
            *(undefined8 *)(param_1 + 8) = uVar9;
            return true;
          }
        }
      }
    }
    break;
  default:
    CVar1 = param_1[8];
    CVar2 = *param_1;
    uVar4 = (uint)(byte)param_1[0x10];
    if ((uint)(byte)CVar1 < (uint)(byte)CVar2) {
      uVar5 = *(undefined8 *)param_1;
      if (uVar4 < (byte)CVar1) {
        *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 0x10);
      }
      else {
        *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(param_1 + 8) = uVar5;
        if (((uint)uVar5 & 0xff) <= uVar4) goto LAB_00c02c2c;
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
      }
      uVar4 = (uint)uVar5 & 0xff;
      *(undefined8 *)(param_1 + 0x10) = uVar5;
    }
    else if (uVar4 < (byte)CVar1) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      uVar4 = (uint)uVar5 & 0xff;
      *(undefined8 *)(param_1 + 8) = uVar9;
      *(undefined8 *)(param_1 + 0x10) = uVar5;
      if ((uint)(byte)uVar9 <= (uint)(byte)CVar2 && (uint)(byte)CVar2 != (uint)(byte)uVar9) {
        uVar5 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = uVar9;
        *(undefined8 *)(param_1 + 8) = uVar5;
      }
    }
LAB_00c02c2c:
    if (param_1 + 0x18 != param_2) {
      lVar7 = 0;
      iVar8 = 0;
      puVar6 = (undefined8 *)(param_1 + 0x18);
      do {
        if ((byte)*(Character *)puVar6 < uVar4) {
          uVar5 = *puVar6;
          lVar3 = lVar7;
          do {
            lVar10 = lVar3;
            *(undefined8 *)(param_1 + lVar10 + 0x18) = *(undefined8 *)(param_1 + lVar10 + 0x10);
            puVar11 = (undefined8 *)param_1;
            if (lVar10 == -0x10) goto LAB_00c02c88;
            lVar3 = lVar10 + -8;
          } while ((byte)SUB81(uVar5,0) < (byte)param_1[lVar10 + 8]);
          puVar11 = (undefined8 *)(param_1 + lVar10 + 0x10);
LAB_00c02c88:
          iVar8 = iVar8 + 1;
          *puVar11 = uVar5;
          if (iVar8 == 8) {
            return puVar6 + 1 == (undefined8 *)param_2;
          }
        }
        if (puVar6 + 1 == (undefined8 *)param_2) {
          return true;
        }
        uVar4 = (uint)(byte)*(Character *)puVar6;
        lVar7 = lVar7 + 8;
        puVar6 = puVar6 + 1;
      } while( true );
    }
  }
  return true;
}


