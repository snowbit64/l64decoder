// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<std::__ndk1::__less<DictionaryCompressor::Main::DictString,DictionaryCompressor::Main::DictString>&,DictionaryCompressor::Main::DictString*>
// Entry Point: 00c05a64
// Size: 480 bytes
// Signature: uint __cdecl __sort4<std::__ndk1::__less<DictionaryCompressor::Main::DictString,DictionaryCompressor::Main::DictString>&,DictionaryCompressor::Main::DictString*>(DictString * param_1, DictString * param_2, DictString * param_3, DictString * param_4, __less * param_5)


/* unsigned int std::__ndk1::__sort4<std::__ndk1::__less<DictionaryCompressor::Main::DictString,
   DictionaryCompressor::Main::DictString>&,
   DictionaryCompressor::Main::DictString*>(DictionaryCompressor::Main::DictString*,
   DictionaryCompressor::Main::DictString*, DictionaryCompressor::Main::DictString*,
   DictionaryCompressor::Main::DictString*,
   std::__ndk1::__less<DictionaryCompressor::Main::DictString,
   DictionaryCompressor::Main::DictString>&) */

uint std::__ndk1::
     __sort4<std::__ndk1::__less<DictionaryCompressor::Main::DictString,DictionaryCompressor::Main::DictString>&,DictionaryCompressor::Main::DictString*>
               (DictString *param_1,DictString *param_2,DictString *param_3,DictString *param_4,
               __less *param_5)

{
  undefined4 uVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  uVar2 = *(ushort *)param_2;
  if (uVar2 < *(ushort *)param_1) {
    if (*(ushort *)param_3 < uVar2) {
      uVar1 = *(undefined4 *)(param_3 + 8);
      uVar6 = *(undefined8 *)param_1;
      uVar7 = *(undefined4 *)(param_1 + 8);
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      uVar4 = 1;
      *(undefined4 *)(param_1 + 8) = uVar1;
    }
    else {
      uVar7 = *(undefined4 *)(param_2 + 8);
      uVar6 = *(undefined8 *)param_1;
      uVar1 = *(undefined4 *)(param_1 + 8);
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined4 *)(param_1 + 8) = uVar7;
      *(undefined8 *)param_2 = uVar6;
      *(undefined4 *)(param_2 + 8) = uVar1;
      if (((uint)uVar6 & 0xffff) <= (uint)*(ushort *)param_3) goto LAB_00c05b78;
      uVar1 = *(undefined4 *)(param_3 + 8);
      uVar6 = *(undefined8 *)param_2;
      uVar7 = *(undefined4 *)(param_2 + 8);
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      uVar4 = 2;
      *(undefined4 *)(param_2 + 8) = uVar1;
    }
    *(undefined8 *)param_3 = uVar6;
    *(undefined4 *)(param_3 + 8) = uVar7;
  }
  else {
    if (uVar2 <= *(ushort *)param_3) {
      uVar4 = 0;
      goto LAB_00c05b7c;
    }
    uVar7 = *(undefined4 *)(param_3 + 8);
    uVar6 = *(undefined8 *)param_2;
    uVar1 = *(undefined4 *)(param_2 + 8);
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined4 *)(param_2 + 8) = uVar7;
    *(undefined8 *)param_3 = uVar6;
    *(undefined4 *)(param_3 + 8) = uVar1;
    if (*(ushort *)param_2 < *(ushort *)param_1) {
      uVar7 = *(undefined4 *)(param_2 + 8);
      uVar6 = *(undefined8 *)param_1;
      uVar1 = *(undefined4 *)(param_1 + 8);
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      uVar4 = 2;
      *(undefined4 *)(param_1 + 8) = uVar7;
      *(undefined8 *)param_2 = uVar6;
      *(undefined4 *)(param_2 + 8) = uVar1;
      goto LAB_00c05b7c;
    }
LAB_00c05b78:
    uVar4 = 1;
  }
LAB_00c05b7c:
  if (*(ushort *)param_4 < *(ushort *)param_3) {
    uVar7 = *(undefined4 *)(param_4 + 8);
    uVar6 = *(undefined8 *)param_3;
    uVar1 = *(undefined4 *)(param_3 + 8);
    *(undefined8 *)param_3 = *(undefined8 *)param_4;
    *(undefined4 *)(param_3 + 8) = uVar7;
    *(undefined8 *)param_4 = uVar6;
    *(undefined4 *)(param_4 + 8) = uVar1;
    if (*(ushort *)param_3 < *(ushort *)param_2) {
      uVar7 = *(undefined4 *)(param_3 + 8);
      uVar6 = *(undefined8 *)param_2;
      uVar1 = *(undefined4 *)(param_2 + 8);
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined4 *)(param_2 + 8) = uVar7;
      *(undefined8 *)param_3 = uVar6;
      *(undefined4 *)(param_3 + 8) = uVar1;
      if (*(ushort *)param_2 < *(ushort *)param_1) {
        uVar4 = uVar4 + 3;
        uVar7 = *(undefined4 *)(param_2 + 8);
        uVar6 = *(undefined8 *)param_1;
        uVar1 = *(undefined4 *)(param_1 + 8);
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        *(undefined4 *)(param_1 + 8) = uVar7;
        *(undefined8 *)param_2 = uVar6;
        *(undefined4 *)(param_2 + 8) = uVar1;
      }
      else {
        uVar4 = uVar4 + 2;
      }
    }
    else {
      uVar4 = uVar4 + 1;
    }
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


