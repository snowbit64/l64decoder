// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initializeGlobalSymbolTable
// Entry Point: 00c1eabc
// Size: 792 bytes
// Signature: undefined __cdecl initializeGlobalSymbolTable(Context * param_1, GsTInfoSink * param_2, GsTSymbolTable * param_3, SHC_PoolAllocator * param_4, char * param_5, bool param_6)


/* HlslParser::initializeGlobalSymbolTable(HlslParser::Context&, GsTInfoSink&, GsTSymbolTable&,
   SHC_PoolAllocator&, char const*, bool) */

uint HlslParser::initializeGlobalSymbolTable
               (Context *param_1,GsTInfoSink *param_2,GsTSymbolTable *param_3,
               SHC_PoolAllocator *param_4,char *param_5,bool param_6)

{
  Context *pCVar1;
  Context *pCVar2;
  long **pplVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  size_t __n;
  char *pcVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *__s;
  char *pcVar11;
  long **pplVar12;
  ulong local_168;
  size_t sStack_160;
  char *local_158;
  undefined8 local_150;
  size_t sStack_148;
  char *local_140;
  GISLParserContext aGStack_130 [16];
  long *local_120;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  GsTSymbolTable::push(param_3,param_4);
  pCVar1 = param_1 + 0xde1;
  if (((byte)param_1[0xde0] & 1) != 0) {
    pCVar1 = *(Context **)(param_1 + 0xdf0);
  }
  pCVar2 = param_1 + 0xdf9;
  if (((byte)param_1[0xdf8] & 1) != 0) {
    pCVar2 = *(Context **)(param_1 + 0xe08);
  }
  GISLParserContext::GISLParserContext
            (aGStack_130,param_3,param_2,param_4,(char *)pCVar1,(char *)pCVar2,param_6);
                    /* try { // try from 00c1eb4c to 00c1eb5b has its CatchHandler @ 00c1edd8 */
  uVar6 = parseString(param_5,(char *)0x0,aGStack_130);
  if ((uVar6 & 1) == 0) {
                    /* try { // try from 00c1ed68 to 00c1ed7b has its CatchHandler @ 00c1edd8 */
    GsTInfoSinkBase::message((GsTInfoSinkBase *)param_2,3,"Unable to parse built-ins");
  }
  else {
                    /* try { // try from 00c1eb70 to 00c1eb73 has its CatchHandler @ 00c1edd4 */
    lVar7 = (**(code **)(*local_120 + 0x30))();
    if (lVar7 != 0) {
      pplVar12 = *(long ***)(lVar7 + 0x50);
      pplVar3 = *(long ***)(lVar7 + 0x58);
      if (pplVar12 != pplVar3) {
        pcVar11 = (char *)((ulong)&local_150 | 1);
        do {
                    /* try { // try from 00c1ebb0 to 00c1ebb3 has its CatchHandler @ 00c1ee04 */
          lVar7 = (**(code **)(**pplVar12 + 0x48))();
          if (lVar7 != 0) {
            pbVar9 = *(byte **)(lVar7 + 0x50);
            __s = *(byte **)(pbVar9 + 0x10);
            if ((*pbVar9 & 1) == 0) {
              __s = pbVar9 + 1;
            }
            __n = strlen((char *)__s);
            if (0xffffffffffffffef < __n) {
                    /* try { // try from 00c1edc8 to 00c1edcf has its CatchHandler @ 00c1ede8 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (__n < 0x17) {
              local_150 = CONCAT71(local_150._1_7_,(char)((int)__n << 1));
              pcVar8 = pcVar11;
              if (__n != 0) goto LAB_00c1ec20;
            }
            else {
              uVar10 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00c1ec04 to 00c1ec0b has its CatchHandler @ 00c1ede0 */
              pcVar8 = (char *)operator_new(uVar10);
              local_150 = uVar10 | 1;
              sStack_148 = __n;
              local_140 = pcVar8;
LAB_00c1ec20:
              memcpy(pcVar8,__s,__n);
            }
            pcVar8[__n] = '\0';
                    /* try { // try from 00c1ec34 to 00c1ec4b has its CatchHandler @ 00c1ede4 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string((basic_string *)&local_168,(ulong)&local_150,2,
                         (allocator *)0xffffffffffffffff);
            if ((local_150 & 1) != 0) {
              operator_delete(local_140);
            }
            sStack_148 = sStack_160;
            local_150 = local_168;
            local_140 = local_158;
            if ((local_168 & 1) == 0) {
              uVar10 = local_168 >> 1 & 0x7f;
              pcVar8 = (char *)((long)&local_150 + uVar10);
              local_150._1_7_ = (undefined7)(local_168 >> 8);
              local_150 = CONCAT71(local_150._1_7_,((char)uVar10 + -1) * '\x02');
            }
            else {
              sStack_148 = sStack_160 - 1;
              pcVar8 = local_158 + sStack_148;
            }
            *pcVar8 = '\0';
            if ((local_150 & 1) == 0) {
              uVar10 = local_150 >> 1 & 0x7f;
              pcVar8 = (char *)((long)&local_150 + uVar10);
              local_150 = CONCAT71(local_150._1_7_,((char)uVar10 + -1) * '\x02');
            }
            else {
              sStack_148 = sStack_148 - 1;
              pcVar8 = local_140 + sStack_148;
            }
            *pcVar8 = '\0';
            pcVar8 = pcVar11;
            if ((local_150 & 1) != 0) {
              pcVar8 = local_140;
            }
            bVar4 = (byte)local_150;
            if (*pcVar8 == '\n') {
                    /* try { // try from 00c1ecf8 to 00c1ed0f has its CatchHandler @ 00c1eddc */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string((basic_string *)&local_168,(ulong)&local_150,1,
                           (allocator *)0xffffffffffffffff);
              if ((local_150 & 1) != 0) {
                operator_delete(local_140);
              }
              sStack_148 = sStack_160;
              local_150 = local_168;
              uVar10 = local_150;
              local_150._0_1_ = (byte)local_168;
              local_140 = local_158;
              bVar4 = (byte)local_150;
              local_150 = uVar10;
            }
            pcVar8 = pcVar11;
            if ((bVar4 & 1) != 0) {
              pcVar8 = local_140;
            }
                    /* try { // try from 00c1ed4c to 00c1ed53 has its CatchHandler @ 00c1edec */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((char *)(param_1 + 0xe10),(ulong)pcVar8);
            if ((local_150 & 1) != 0) {
              operator_delete(local_140);
            }
          }
          pplVar12 = pplVar12 + 1;
        } while (pplVar12 != pplVar3);
      }
    }
                    /* try { // try from 00c1ed80 to 00c1ed87 has its CatchHandler @ 00c1edd4 */
    GsTBuiltIns::identify(param_3);
  }
  GISLParserContext::~GISLParserContext(aGStack_130);
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return uVar6 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


