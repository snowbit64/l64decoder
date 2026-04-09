// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<std::__ndk1::__less<DictionaryCreator::Main::Character,DictionaryCreator::Main::Character>&,DictionaryCreator::Main::Character*>
// Entry Point: 00c028c4
// Size: 308 bytes
// Signature: uint __cdecl __sort4<std::__ndk1::__less<DictionaryCreator::Main::Character,DictionaryCreator::Main::Character>&,DictionaryCreator::Main::Character*>(Character * param_1, Character * param_2, Character * param_3, Character * param_4, __less * param_5)


/* unsigned int std::__ndk1::__sort4<std::__ndk1::__less<DictionaryCreator::Main::Character,
   DictionaryCreator::Main::Character>&,
   DictionaryCreator::Main::Character*>(DictionaryCreator::Main::Character*,
   DictionaryCreator::Main::Character*, DictionaryCreator::Main::Character*,
   DictionaryCreator::Main::Character*, std::__ndk1::__less<DictionaryCreator::Main::Character,
   DictionaryCreator::Main::Character>&) */

uint std::__ndk1::
     __sort4<std::__ndk1::__less<DictionaryCreator::Main::Character,DictionaryCreator::Main::Character>&,DictionaryCreator::Main::Character*>
               (Character *param_1,Character *param_2,Character *param_3,Character *param_4,
               __less *param_5)

{
  Character CVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  CVar1 = *param_2;
  uVar3 = (uint)(byte)*param_3;
  if ((uint)(byte)CVar1 < (uint)(byte)*param_1) {
    uVar4 = *(undefined8 *)param_1;
    if (uVar3 < (byte)CVar1) {
      uVar2 = 1;
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar4;
      uVar3 = (uint)(byte)*param_3;
      if (((uint)uVar4 & 0xff) <= uVar3) goto LAB_00c0297c;
      uVar2 = 2;
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
    }
    uVar3 = (uint)uVar4 & 0xff;
    *(undefined8 *)param_3 = uVar4;
  }
  else {
    if ((byte)CVar1 <= uVar3) {
      uVar2 = 0;
      goto LAB_00c02980;
    }
    uVar4 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = uVar4;
    if ((byte)*param_2 < (byte)*param_1) {
      uVar4 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      uVar2 = 2;
      *(undefined8 *)param_2 = uVar4;
      uVar3 = (uint)(byte)*param_3;
      goto LAB_00c02980;
    }
    uVar3 = (uint)uVar4 & 0xff;
LAB_00c0297c:
    uVar2 = 1;
  }
LAB_00c02980:
  if ((byte)*param_4 < uVar3) {
    uVar4 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = *(undefined8 *)param_4;
    *(undefined8 *)param_4 = uVar4;
    if ((byte)*param_2 <= (byte)*param_3) {
      return uVar2 + 1;
    }
    uVar4 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = uVar4;
    if ((byte)*param_1 <= (byte)*param_2) {
      return uVar2 + 2;
    }
    uVar2 = uVar2 + 3;
    uVar4 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = uVar4;
  }
  return uVar2;
}


