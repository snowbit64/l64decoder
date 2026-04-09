// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mergeGlobalData
// Entry Point: 00c32aa0
// Size: 408 bytes
// Signature: undefined __cdecl mergeGlobalData(vector * param_1, vector * param_2, vector * param_3)


/* IR_HllConvertUtil::mergeGlobalData(std::__ndk1::vector<IR_HllConvertUtil::GlobalData,
   std::__ndk1::allocator<IR_HllConvertUtil::GlobalData> >&,
   std::__ndk1::vector<IR_HllConvertUtil::GlobalData,
   std::__ndk1::allocator<IR_HllConvertUtil::GlobalData> > const&,
   std::__ndk1::vector<IR_HllConvertUtil::GlobalData,
   std::__ndk1::allocator<IR_HllConvertUtil::GlobalData> >&) */

void IR_HllConvertUtil::mergeGlobalData(vector *param_1,vector *param_2,vector *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(param_2 + 8);
  for (puVar5 = *(undefined8 **)param_2; puVar5 != puVar1; puVar5 = puVar5 + 8) {
    while( true ) {
      puVar6 = *(undefined8 **)param_1;
      puVar2 = *(undefined8 **)(param_1 + 8);
      if (puVar6 != puVar2) {
        pcVar4 = (char *)puVar5[1];
        do {
          iVar3 = strcmp(pcVar4,(char *)puVar6[1]);
          if ((iVar3 == 0) && (*(int *)puVar5 == *(int *)puVar6)) goto LAB_00c32adc;
          puVar6 = puVar6 + 8;
        } while (puVar6 != puVar2);
      }
      if (puVar2 != *(undefined8 **)(param_1 + 0x10)) break;
      std::__ndk1::
      vector<IR_HllConvertUtil::GlobalData,std::__ndk1::allocator<IR_HllConvertUtil::GlobalData>>::
      __push_back_slow_path<IR_HllConvertUtil::GlobalData_const&>
                ((vector<IR_HllConvertUtil::GlobalData,std::__ndk1::allocator<IR_HllConvertUtil::GlobalData>>
                  *)param_1,(GlobalData *)puVar5);
LAB_00c32adc:
      puVar5 = puVar5 + 8;
      if (puVar5 == puVar1) goto LAB_00c32b70;
    }
    uVar8 = puVar5[1];
    uVar7 = *puVar5;
    puVar2[2] = puVar5[2];
    puVar2[1] = uVar8;
    *puVar2 = uVar7;
                    /* try { // try from 00c32b50 to 00c32b53 has its CatchHandler @ 00c32c40 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(puVar2 + 3));
    uVar7 = puVar5[6];
    puVar2[7] = puVar5[7];
    puVar2[6] = uVar7;
    *(undefined8 **)(param_1 + 8) = puVar2 + 8;
  }
LAB_00c32b70:
  puVar5 = *(undefined8 **)param_3;
  puVar1 = *(undefined8 **)(param_3 + 8);
  do {
    if (puVar5 == puVar1) {
      return;
    }
    while( true ) {
      puVar6 = *(undefined8 **)param_1;
      puVar2 = *(undefined8 **)(param_1 + 8);
      if (puVar6 != puVar2) {
        pcVar4 = (char *)puVar5[1];
        do {
          iVar3 = strcmp(pcVar4,(char *)puVar6[1]);
          if ((iVar3 == 0) && (*(int *)puVar5 == *(int *)puVar6)) goto LAB_00c32b8c;
          puVar6 = puVar6 + 8;
        } while (puVar6 != puVar2);
      }
      if (puVar2 != *(undefined8 **)(param_1 + 0x10)) break;
      std::__ndk1::
      vector<IR_HllConvertUtil::GlobalData,std::__ndk1::allocator<IR_HllConvertUtil::GlobalData>>::
      __push_back_slow_path<IR_HllConvertUtil::GlobalData_const&>
                ((vector<IR_HllConvertUtil::GlobalData,std::__ndk1::allocator<IR_HllConvertUtil::GlobalData>>
                  *)param_1,(GlobalData *)puVar5);
LAB_00c32b8c:
      puVar5 = puVar5 + 8;
      if (puVar5 == puVar1) {
        return;
      }
    }
    uVar8 = puVar5[1];
    uVar7 = *puVar5;
    puVar2[2] = puVar5[2];
    puVar2[1] = uVar8;
    *puVar2 = uVar7;
                    /* try { // try from 00c32c00 to 00c32c03 has its CatchHandler @ 00c32c38 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(puVar2 + 3));
    puVar6 = puVar5 + 7;
    uVar7 = puVar5[6];
    puVar5 = puVar5 + 8;
    puVar2[7] = *puVar6;
    puVar2[6] = uVar7;
    *(undefined8 **)(param_1 + 8) = puVar2 + 8;
  } while( true );
}


