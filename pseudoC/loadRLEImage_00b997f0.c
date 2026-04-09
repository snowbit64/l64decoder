// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadRLEImage
// Entry Point: 00b997f0
// Size: 1172 bytes
// Signature: undefined __cdecl loadRLEImage(char * param_1, BitVector * * param_2, uint param_3, uint * param_4, uint * param_5, uint * param_6, bool param_7)


/* RLEUtil::loadRLEImage(char const*, BitVector*&, unsigned int, unsigned int&, unsigned int&,
   unsigned int&, bool) */

undefined4
RLEUtil::loadRLEImage
          (char *param_1,BitVector **param_2,uint param_3,uint *param_4,uint *param_5,uint *param_6,
          bool param_7)

{
  uint uVar1;
  long lVar2;
  undefined **ppuVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  BitVector *pBVar10;
  uint *puVar11;
  uint *puVar12;
  char *pcVar13;
  undefined4 uVar14;
  undefined **local_20d0;
  byte local_20c8;
  long *local_20c0;
  char local_20b8;
  int *local_20b0;
  undefined4 local_20a8;
  undefined4 local_20a4;
  undefined8 local_20a0;
  undefined8 local_2098;
  undefined8 local_2090;
  undefined8 local_2088;
  undefined4 uStack_2080;
  undefined4 uStack_207c;
  undefined uStack_2078;
  undefined4 local_2077;
  int local_2070;
  undefined4 uStack_206c;
  undefined4 uStack_2068;
  undefined4 uStack_2064;
  undefined uStack_2060;
  uint local_205f;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  plVar7 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,0,
                                    false);
  if (plVar7 == (long *)0x0) {
    uVar14 = 0;
    goto LAB_00b99974;
  }
  uVar8 = (**(code **)(*plVar7 + 0x10))();
  if (((uVar8 & 1) == 0) || (lVar9 = (**(code **)(*plVar7 + 0x48))(plVar7), lVar9 < 0x15)) {
LAB_00b99958:
    uVar14 = 0;
  }
  else {
    if (param_7) {
      iVar6 = (**(code **)(*plVar7 + 0x28))(plVar7,&local_2070,0x15);
      if ((iVar6 == 0x15) &&
         ((bVar4 = local_2070 == 0x5a4c5247, bVar4 || (local_2070 == 0x454c5247)))) {
        *param_4 = CONCAT13((undefined)uStack_2068,uStack_206c._1_3_);
        *param_5 = CONCAT13((undefined)uStack_2064,uStack_2068._1_3_);
        *param_6 = CONCAT13(uStack_2060,uStack_2064._1_3_);
        if ((char)uStack_206c == '\x01') {
          pBVar10 = (BitVector *)operator_new(0x10);
                    /* try { // try from 00b99918 to 00b99923 has its CatchHandler @ 00b99c94 */
          BitVector::BitVector(pBVar10,*param_4 * param_3 * *param_5,true,false);
          *param_2 = pBVar10;
          puVar11 = (uint *)operator_new__((ulong)local_205f);
          (**(code **)(*plVar7 + 0x28))(plVar7,puVar11,(ulong)local_205f);
          if (bVar4) {
            uVar1 = *puVar11;
            puVar12 = (uint *)operator_new__((ulong)uVar1);
            uVar8 = ZLIBCompressionUtil::decompress
                              ((uchar *)(puVar11 + 1),local_205f - 4,(uchar *)puVar12,uVar1);
            if ((uVar8 & 1) == 0) {
              pcVar13 = (char *)LogManager::getInstance();
              LogManager::errorf(pcVar13,"Error: Failed to decompress GRLE file\n");
              operator_delete__(puVar11);
              operator_delete__(puVar12);
              uVar14 = 0;
              goto LAB_00b9995c;
            }
            operator_delete__(puVar11);
            puVar11 = puVar12;
            local_205f = uVar1;
          }
          uVar14 = uStack_206c;
          iVar6 = local_2070;
          local_2070 = (int)puVar11;
          uStack_206c = (undefined4)((ulong)puVar11 >> 0x20);
          if (*param_6 == 2) {
            uStack_2068 = local_205f >> 1;
            uStack_2064 = 0;
            _decode<BitVector,unsigned_short,CompressedIoUtil::CompressedBufferInput<unsigned_short>>
                      ((CompressedBufferInput *)&local_2070,param_3,param_3,*param_2);
          }
          else if (*param_6 == 1) {
            uStack_2064 = 0;
            uStack_2068 = local_205f;
            _decode<BitVector,unsigned_char,CompressedIoUtil::CompressedBufferInput<unsigned_char>>
                      ((CompressedBufferInput *)&local_2070,param_3,param_3,*param_2);
          }
          else {
            local_2070 = iVar6;
            uStack_206c = uVar14;
            DebugUtil::message("Error",
                               "RLEUtil: decoding to BitVector is only supported with input char width 1 or 2"
                               ,(char *)0x0,"T:/src/base/misc/RLEUtil.cpp",0x6a);
          }
          operator_delete__(puVar11);
          uVar14 = 1;
          goto LAB_00b9995c;
        }
      }
      goto LAB_00b99958;
    }
    File::File((File *)&local_20d0);
    local_20b0 = &local_2070;
    local_20a8 = 0x2000;
    local_20d0 = &PTR__BufferedFileReader_00fe02c0;
    local_20b8 = '\0';
    local_20c0 = plVar7;
                    /* try { // try from 00b999e4 to 00b99a1b has its CatchHandler @ 00b99cbc */
    local_2090 = (**(code **)(*plVar7 + 0x48))(plVar7);
    local_2098 = (**(code **)(*local_20c0 + 0x40))(local_20c0);
    bVar5 = (**(code **)(*local_20c0 + 0x60))(local_20c0);
    local_20a4 = 0;
    local_20c8 = ~bVar5 & 1;
    local_20a0 = local_2098;
                    /* try { // try from 00b99a3c to 00b99a4b has its CatchHandler @ 00b99ca8 */
    iVar6 = (*(code *)local_20d0[5])(&local_20d0,&local_2088,0x15);
    if ((iVar6 != 0x15) || (((int)local_2088 != 0x5a4c5247 && ((int)local_2088 != 0x454c5247)))) {
      uVar14 = 0;
      local_2088 = (undefined ***)CONCAT44(local_2088._4_4_,(int)local_2088);
    }
    else {
      bVar4 = local_2088._4_1_ == '\x01';
      *param_4 = CONCAT13((undefined)uStack_2080,local_2088._5_3_);
      *param_5 = CONCAT13((undefined)uStack_207c,uStack_2080._1_3_);
      *param_6 = CONCAT13(uStack_2078,uStack_207c._1_3_);
      uVar14 = 0;
      local_2088 = (undefined ***)CONCAT44(local_2088._4_4_,(int)local_2088);
      if ((bVar4) &&
         (uVar14 = 0, local_2088 = (undefined ***)CONCAT44(local_2088._4_4_,(int)local_2088),
         (int)local_2088 != 0x5a4c5247)) {
                    /* try { // try from 00b99ae4 to 00b99aeb has its CatchHandler @ 00b99ca8 */
        pBVar10 = (BitVector *)operator_new(0x10);
                    /* try { // try from 00b99b00 to 00b99b0b has its CatchHandler @ 00b99c84 */
        BitVector::BitVector(pBVar10,*param_4 * param_3 * *param_5,true,false);
        *param_2 = pBVar10;
        if (*param_6 == 2) {
          uStack_2080 = local_2077;
          uStack_207c = 0;
                    /* try { // try from 00b99bc0 to 00b99bfb has its CatchHandler @ 00b99ca8 */
          local_2088 = &local_20d0;
          _decode<BitVector,unsigned_short,CompressedIoUtil::CompressedFileInput<unsigned_short,BufferedFileReader>>
                    ((CompressedFileInput *)&local_2088,param_3,param_3,pBVar10);
        }
        else if (*param_6 == 1) {
          uStack_2080 = local_2077;
          uStack_207c = 0;
                    /* try { // try from 00b99b30 to 00b99b43 has its CatchHandler @ 00b99ca8 */
          local_2088 = &local_20d0;
          _decode<BitVector,unsigned_char,CompressedIoUtil::CompressedFileInput<unsigned_char,BufferedFileReader>>
                    ((CompressedFileInput *)&local_2088,param_3,param_3,pBVar10);
        }
        else {
          DebugUtil::message("Error",
                             "RLEUtil: decoding to BitVector is only supported with input char width 1 or 2"
                             ,(char *)0x0,"T:/src/base/misc/RLEUtil.cpp",0x99);
        }
        uVar14 = 1;
      }
    }
    local_20d0 = &PTR__BufferedFileReader_00fe02c0;
    ppuVar3 = &PTR__BufferedFileReader_00fe02c0;
    if ((local_20b8 != '\0') && (ppuVar3 = local_20d0, local_20c0 != (long *)0x0)) {
      local_20d0 = &PTR__BufferedFileReader_00fe02c0;
      (**(code **)(*local_20c0 + 8))();
      ppuVar3 = local_20d0;
    }
    local_20d0 = ppuVar3;
    File::~File((File *)&local_20d0);
  }
LAB_00b9995c:
  (**(code **)(*plVar7 + 8))(plVar7);
LAB_00b99974:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}


