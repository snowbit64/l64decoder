// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRegisterValue
// Entry Point: 00c30620
// Size: 1400 bytes
// Signature: undefined __cdecl setRegisterValue(ConversionContext * param_1, vector * param_2, uint param_3, char * param_4, uint param_5, CodeStringStream * param_6, CodeStringStream * param_7, bool param_8)


/* WARNING: Removing unreachable block (ram,0x00c30774) */
/* WARNING: Removing unreachable block (ram,0x00c308f4) */
/* IR_HllConvertUtil::setRegisterValue(IR_HllConvertUtil::ConversionContext&,
   std::__ndk1::vector<IR_HllConvertUtil::RegContents,
   std::__ndk1::allocator<IR_HllConvertUtil::RegContents> >&, unsigned int, char const*, unsigned
   int, CodeStringStream&, CodeStringStream&, bool) */

void IR_HllConvertUtil::setRegisterValue
               (ConversionContext *param_1,vector *param_2,uint param_3,char *param_4,uint param_5,
               CodeStringStream *param_6,CodeStringStream *param_7,bool param_8)

{
  ulong *puVar1;
  byte *pbVar2;
  IR_LANGUAGE IVar3;
  long lVar4;
  bool bVar5;
  uint *this;
  size_t sVar6;
  vector *pvVar7;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  char *__dest;
  ulong uVar11;
  ulong local_b8;
  size_t sStack_b0;
  char *local_a8;
  ulong local_a0;
  size_t sStack_98;
  char *local_90;
  undefined8 local_88;
  size_t sStack_80;
  char *local_78;
  uint *local_70;
  long local_68;
  
  pcVar8 = (char *)(ulong)param_3;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  IVar3 = (uint)(**(int **)param_1 - 3U < 2) << 1;
  if (**(int **)param_1 == 5) {
    IVar3 = 1;
  }
  pcVar10 = pcVar8;
  this = (uint *)IR_RegisterSet::getRegisterType
                           ((IR_RegisterSet *)(*(long *)(param_1 + 8) + 0x98),param_3);
  if ((8 < *this) || ((1 << (ulong)(*this & 0x1f) & 0x1a0U) == 0)) {
    pbVar2 = (byte *)(*(long *)param_2 + (long)pcVar8 * 0x20);
    bVar5 = (*pbVar2 & 1) != 0;
    uVar11 = (ulong)(*pbVar2 >> 1);
    if (bVar5) {
      uVar11 = *(ulong *)(pbVar2 + 8);
    }
    if (uVar11 == 0) {
      local_a0 = 0;
      sStack_98 = 0;
      local_90 = (char *)0x0;
                    /* try { // try from 00c307d4 to 00c307fb has its CatchHandler @ 00c30bf4 */
      pvVar7 = (vector *)
               IR_RegisterSet::getRegisterName
                         ((IR_RegisterSet *)(*(long *)(param_1 + 8) + 0x98),param_3);
      if (pvVar7 == (vector *)0x0) {
                    /* try { // try from 00c3082c to 00c3084f has its CatchHandler @ 00c30bec */
        pcVar10 = "tmp%u";
        FUN_00c2f578(&local_88,0x20,"tmp%u",pcVar8);
        uVar11 = findName(param_2,(char *)&local_88);
        if ((uVar11 & 1) == 0) {
                    /* try { // try from 00c3089c to 00c308a7 has its CatchHandler @ 00c30bec */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((char *)&local_a0);
          uVar11 = local_a0;
          sVar6 = sStack_98;
          pcVar10 = local_90;
        }
        else {
                    /* try { // try from 00c30854 to 00c30867 has its CatchHandler @ 00c30be4 */
          makeAlternateName((IR_HllConvertUtil *)param_2,(vector *)&DAT_004fa9f7,pcVar10);
          uVar11 = local_b8;
          sVar6 = sStack_b0;
          pcVar10 = local_a8;
          if ((local_a0 & 1) != 0) {
            operator_delete(local_90);
            uVar11 = local_b8;
            sVar6 = sStack_b0;
            pcVar10 = local_a8;
          }
        }
      }
      else {
        if (*pvVar7 == (vector)0x24) {
          pvVar7 = pvVar7 + 1;
        }
        uVar11 = findName(param_2,(char *)pvVar7);
        if ((uVar11 & 1) == 0) {
                    /* try { // try from 00c3088c to 00c30897 has its CatchHandler @ 00c30bf4 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((char *)&local_a0);
          uVar11 = local_a0;
          sVar6 = sStack_98;
          pcVar10 = local_90;
        }
        else {
                    /* try { // try from 00c30800 to 00c3080f has its CatchHandler @ 00c30be8 */
          makeAlternateName((IR_HllConvertUtil *)param_2,pvVar7,pcVar10);
          uVar11 = local_88;
          sVar6 = sStack_80;
          pcVar10 = local_78;
          if ((local_a0 & 1) != 0) {
            operator_delete(local_90);
            uVar11 = local_88;
            sVar6 = sStack_80;
            pcVar10 = local_78;
          }
        }
      }
                    /* try { // try from 00c308a8 to 00c308b3 has its CatchHandler @ 00c30bf0 */
      local_90 = pcVar10;
      sStack_98 = sVar6;
      local_a0 = uVar11;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_88);
      puVar1 = (ulong *)(*(long *)param_2 + (long)pcVar8 * 0x20);
      local_70 = this;
      if ((*(byte *)puVar1 & 1) != 0) {
        operator_delete((void *)puVar1[2]);
      }
      puVar1[2] = (ulong)local_78;
      puVar1[1] = sStack_80;
      *puVar1 = local_88;
      local_88 = local_88 & 0xffffffffffff0000;
      puVar1[3] = (ulong)local_70;
      if (*this != 6) {
        if ((*(int *)(param_1 + 0x10) == 2) || (*(int *)(param_1 + 0x10) == 4)) {
          if (param_4 == (char *)0x0) {
            pcVar8 = (char *)((ulong)&local_a0 | 1);
            if ((local_a0 & 1) != 0) {
              pcVar8 = local_90;
            }
                    /* try { // try from 00c30a8c to 00c30a9f has its CatchHandler @ 00c30bac */
            IR_Type::getDeclString((IR_Type *)this,pcVar8,IVar3);
            pcVar8 = (char *)((ulong)&local_88 | 1);
            if ((local_88 & 1) != 0) {
              pcVar8 = local_78;
            }
                    /* try { // try from 00c30ab4 to 00c30ac3 has its CatchHandler @ 00c30ba8 */
            CodeStringStream::writeLine((char *)param_6,&DAT_004eba58,pcVar8);
            if ((local_88 & 1) != 0) {
              operator_delete(local_78);
            }
            if (param_8) {
              pcVar8 = (char *)((ulong)&local_a0 | 1);
              if ((local_a0 & 1) != 0) {
                pcVar8 = local_90;
              }
                    /* try { // try from 00c30ae8 to 00c30af7 has its CatchHandler @ 00c30bf4 */
              writeNullAssignCode(pcVar8,(IR_Type *)this,param_6,IVar3);
            }
          }
          else if (*this == 4) {
            pcVar8 = (char *)((ulong)&local_a0 | 1);
            if ((local_a0 & 1) != 0) {
              pcVar8 = local_90;
            }
                    /* try { // try from 00c30978 to 00c3098b has its CatchHandler @ 00c30ba4 */
            IR_Type::getDeclString((IR_Type *)this,pcVar8,IVar3);
            pcVar8 = (char *)((ulong)&local_88 | 1);
            if ((local_88 & 1) != 0) {
              pcVar8 = local_78;
            }
                    /* try { // try from 00c309a0 to 00c309af has its CatchHandler @ 00c30ba0 */
            CodeStringStream::writeLine((char *)param_6,&DAT_004eba58,pcVar8);
            if ((local_88 & 1) != 0) {
              operator_delete(local_78);
            }
            pcVar8 = (char *)((ulong)&local_a0 | 1);
            if ((local_a0 & 1) != 0) {
              pcVar8 = local_90;
            }
                    /* try { // try from 00c309d0 to 00c309df has its CatchHandler @ 00c30bf4 */
            writeAssignCode(pcVar8,param_4,(IR_Type *)this,param_6);
          }
          else {
            pcVar8 = (char *)((ulong)&local_a0 | 1);
            if ((local_a0 & 1) != 0) {
              pcVar8 = local_90;
            }
                    /* try { // try from 00c30b14 to 00c30b27 has its CatchHandler @ 00c30b9c */
            IR_Type::getDeclString((IR_Type *)this,pcVar8,IVar3);
            pcVar8 = (char *)((ulong)&local_88 | 1);
            if ((local_88 & 1) != 0) {
              pcVar8 = local_78;
            }
                    /* try { // try from 00c30b3c to 00c30b4f has its CatchHandler @ 00c30b98 */
            CodeStringStream::writeLine((char *)param_6,"%s = %s;\n",pcVar8,param_4);
            if ((local_88 & 1) != 0) {
              operator_delete(local_78);
            }
          }
        }
        else {
          pcVar10 = (char *)((ulong)&local_a0 | 1);
          pcVar8 = pcVar10;
          if ((local_a0 & 1) != 0) {
            pcVar8 = local_90;
          }
                    /* try { // try from 00c30a04 to 00c30a17 has its CatchHandler @ 00c30be0 */
          IR_Type::getDeclString((IR_Type *)this,pcVar8,IVar3);
          pcVar8 = (char *)((ulong)&local_88 | 1);
          if ((local_88 & 1) != 0) {
            pcVar8 = local_78;
          }
                    /* try { // try from 00c30a2c to 00c30a3b has its CatchHandler @ 00c30bb0 */
          CodeStringStream::writeLine((char *)param_7,&DAT_004eba58,pcVar8);
          if ((local_88 & 1) != 0) {
            operator_delete(local_78);
          }
          if (param_4 == (char *)0x0) {
            if (param_8) {
              if ((local_a0 & 1) != 0) {
                pcVar10 = local_90;
              }
                    /* try { // try from 00c30b78 to 00c30b87 has its CatchHandler @ 00c30bf4 */
              writeNullAssignCode(pcVar10,(IR_Type *)this,param_6,IVar3);
            }
          }
          else {
            if ((local_a0 & 1) != 0) {
              pcVar10 = local_90;
            }
                    /* try { // try from 00c30a60 to 00c30a6f has its CatchHandler @ 00c30bf4 */
            writeAssignCode(pcVar10,param_4,(IR_Type *)this,param_6);
          }
        }
      }
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
    }
    else {
      pbVar9 = *(byte **)(pbVar2 + 0x10);
      if (!bVar5) {
        pbVar9 = pbVar2 + 1;
      }
      writeAssignCode((char *)pbVar9,param_4,(IR_Type *)this,param_6);
    }
    goto LAB_00c30910;
  }
  pcVar10 = "??WTF??";
  if (param_4 != (char *)0x0) {
    pcVar10 = param_4;
  }
  sVar6 = strlen(pcVar10);
  if (0xffffffffffffffef < sVar6) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar6 < 0x17) {
    __dest = (char *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)sVar6 << 1));
    if (sVar6 != 0) goto LAB_00c3071c;
  }
  else {
    uVar11 = sVar6 + 0x10 & 0xfffffffffffffff0;
    __dest = (char *)operator_new(uVar11);
    local_88 = uVar11 | 1;
    sStack_80 = sVar6;
    local_78 = __dest;
LAB_00c3071c:
    memcpy(__dest,pcVar10,sVar6);
  }
  __dest[sVar6] = '\0';
  puVar1 = (ulong *)(*(long *)param_2 + (long)pcVar8 * 0x20);
  local_70 = this;
  if ((*(byte *)puVar1 & 1) != 0) {
    operator_delete((void *)puVar1[2]);
  }
  puVar1[2] = (ulong)local_78;
  puVar1[1] = sStack_80;
  *puVar1 = local_88;
  local_88 = local_88 & 0xffffffffffff0000;
  puVar1[3] = (ulong)local_70;
LAB_00c30910:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


