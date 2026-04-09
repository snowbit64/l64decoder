// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadXMLFile
// Entry Point: 0086dd24
// Size: 1488 bytes
// Signature: undefined __thiscall loadXMLFile(Condition * this, DomXMLFile * param_1, char * param_2, ConditionalAnimationShared * param_3)


/* ConditionalAnimationConditions::Condition::loadXMLFile(DomXMLFile&, char const*,
   ConditionalAnimationShared const&) */

void __thiscall
ConditionalAnimationConditions::Condition::loadXMLFile
          (Condition *this,DomXMLFile *param_1,char *param_2,ConditionalAnimationShared *param_3)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  ulong uVar6;
  char *__s;
  char *__dest;
  long *plVar7;
  float *__dest_00;
  Condition CVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  long lVar12;
  float *__src;
  float *pfVar13;
  ulong __n;
  void *__dest_01;
  ConditionalAnimationValue aCStack_270 [8];
  ConditionalAnimationValue aCStack_268 [12];
  float local_25c;
  float *local_258;
  float *local_250;
  float *local_248;
  undefined8 local_240;
  size_t local_238;
  char *local_230;
  uint local_224;
  undefined8 local_220;
  size_t local_218;
  void *local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined **local_1f0 [8];
  ulong local_1b0;
  undefined8 uStack_1a8;
  void *local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined8 local_188 [17];
  undefined8 local_100;
  undefined4 local_f8;
  char acStack_f0 [128];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  FUN_0086e3e0(acStack_f0,param_1,param_2,"%s#parameter",param_2);
  pcVar4 = (char *)Properties::getString((Properties *)param_1,acStack_f0,"");
  sVar5 = strlen(pcVar4);
  if (0xffffffffffffffef < sVar5) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar5 < 0x17) {
    __dest_01 = (void *)((ulong)&local_220 | 1);
    local_220 = CONCAT71(local_220._1_7_,(char)((int)sVar5 << 1));
    if (sVar5 == 0) goto LAB_0086ddec;
  }
  else {
    uVar6 = sVar5 + 0x10 & 0xfffffffffffffff0;
    __dest_01 = operator_new(uVar6);
    local_220 = uVar6 | 1;
    local_218 = sVar5;
    local_210 = __dest_01;
  }
  memcpy(__dest_01,pcVar4,sVar5);
LAB_0086ddec:
  *(undefined *)((long)__dest_01 + sVar5) = 0;
  FUN_0086e3e0(acStack_f0);
                    /* try { // try from 0086de08 to 0086de17 has its CatchHandler @ 0086e368 */
  bVar2 = Properties::getBoolDefault((Properties *)param_1,acStack_f0,false);
  this[0x18] = (Condition)(bVar2 & 1);
                    /* try { // try from 0086de24 to 0086de33 has its CatchHandler @ 0086e364 */
  uVar6 = ConditionalAnimationShared::findParameterId(param_3,(basic_string *)&local_220,&local_224)
  ;
  if ((uVar6 & 1) != 0) {
    pcVar4 = (char *)((ulong)&local_240 | 1);
    lVar12 = 0;
    do {
      FUN_0086e3e0(acStack_f0);
                    /* try { // try from 0086de84 to 0086ded3 has its CatchHandler @ 0086e3c4 */
      __s = (char *)Properties::getString((Properties *)param_1,acStack_f0,"");
      sVar5 = strlen(__s);
      if (0xffffffffffffffef < sVar5) {
                    /* try { // try from 0086e2cc to 0086e2d3 has its CatchHandler @ 0086e370 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar5 < 0x17) {
        local_240 = CONCAT71(local_240._1_7_,(char)((int)sVar5 << 1));
        __dest = pcVar4;
        if (sVar5 != 0) goto LAB_0086dee4;
      }
      else {
        uVar6 = sVar5 + 0x10 & 0xfffffffffffffff0;
        __dest = (char *)operator_new(uVar6);
        local_240 = uVar6 | 1;
        local_238 = sVar5;
        local_230 = __dest;
LAB_0086dee4:
        memcpy(__dest,__s,sVar5);
      }
      __dest[sVar5] = '\0';
      sVar5 = local_240 >> 1 & 0x7f;
      if ((local_240 & 1) != 0) {
        sVar5 = local_238;
      }
      if (sVar5 != 0) {
        uVar11 = (uint)lVar12;
        if ((uVar11 & 0x7ffffffe) == 6) {
          local_258 = (float *)0x0;
          local_250 = (float *)0x0;
          local_248 = (float *)0x0;
          local_188[0] = 0xfdbff0;
          local_208 = 0xfdbfc8;
          local_200 = 0;
          local_1f8 = 0xfdbeb0;
                    /* try { // try from 0086df68 to 0086df77 has its CatchHandler @ 0086e33c */
          std::__ndk1::ios_base::init(local_188);
          local_188[0] = 0xfdbed8;
          local_208 = 0xfdbe88;
          local_100 = 0;
          local_f8 = 0xffffffff;
          local_1f8 = 0xfdbeb0;
                    /* try { // try from 0086df98 to 0086df9f has its CatchHandler @ 0086e320 */
          std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
          local_190 = 0x18;
          uStack_1a8 = 0;
          local_1b0 = 0;
          local_1f0[0] = &PTR__basic_stringbuf_00fd8fa0;
          uStack_198 = 0;
          local_1a0 = (void *)0x0;
                    /* try { // try from 0086dfc8 to 0086dfd3 has its CatchHandler @ 0086e300 */
          std::__ndk1::
          basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str
                    ((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)local_1f0,(basic_string *)&local_240);
          pfVar13 = (float *)0x0;
          pfVar9 = (float *)0x0;
          __src = (float *)0x0;
                    /* try { // try from 0086dfec to 0086e063 has its CatchHandler @ 0086e374 */
          while (plVar7 = (long *)std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::
                                  operator>>((basic_istream<char,std::__ndk1::char_traits<char>> *)
                                             &local_208,&local_25c),
                (*(byte *)((long)plVar7 + *(long *)(*plVar7 + -0x18) + 0x20) & 5) == 0) {
            if (pfVar9 == pfVar13) {
              __n = (long)pfVar13 - (long)__src;
              uVar6 = ((long)__n >> 2) + 1;
              if (uVar6 >> 0x3e != 0) {
                    /* try { // try from 0086e2d4 to 0086e2db has its CatchHandler @ 0086e36c */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar6 <= (ulong)((long)__n >> 1)) {
                uVar6 = (long)__n >> 1;
              }
              if (0x7ffffffffffffffb < __n) {
                uVar6 = 0x3fffffffffffffff;
              }
              if (uVar6 == 0) {
                __dest_00 = (float *)0x0;
              }
              else {
                if (uVar6 >> 0x3e != 0) {
                    /* try { // try from 0086e2e4 to 0086e2ef has its CatchHandler @ 0086e36c */
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                __dest_00 = (float *)operator_new(uVar6 << 2);
              }
              pfVar10 = __dest_00 + ((long)__n >> 2) + 1;
              __dest_00[(long)__n >> 2] = local_25c;
              if (0 < (long)__n) {
                memcpy(__dest_00,__src,__n);
              }
              pfVar13 = __dest_00 + uVar6;
              local_258 = __dest_00;
              local_250 = pfVar10;
              local_248 = pfVar13;
              if (__src != (float *)0x0) {
                operator_delete(__src);
              }
            }
            else {
              pfVar10 = pfVar9 + 1;
              *pfVar9 = local_25c;
              __dest_00 = __src;
              local_250 = pfVar10;
            }
                    /* try { // try from 0086e0b0 to 0086e0cf has its CatchHandler @ 0086e374 */
            iVar3 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
            pfVar9 = pfVar10;
            __src = __dest_00;
            if (iVar3 == 0x2c) {
              std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::ignore
                        ((long)&local_208,1);
            }
          }
          if (((long)pfVar9 - (long)__src == 8) && (*__src < __src[1])) {
                    /* try { // try from 0086e150 to 0086e157 has its CatchHandler @ 0086e2f4 */
            ConditionalAnimationValue::ConditionalAnimationValue(aCStack_268,*__src);
                    /* try { // try from 0086e15c to 0086e19b has its CatchHandler @ 0086e2f8 */
            ConditionalAnimationValue::ConditionalAnimationValue(aCStack_270,__src[1]);
            if (uVar11 == 7) {
                    /* try { // try from 0086e1dc to 0086e1ff has its CatchHandler @ 0086e2f8 */
              ConditionalAnimationComparisons::addComparison
                        ((ConditionalAnimationComparisons *)this,local_224,2,aCStack_268);
              ConditionalAnimationComparisons::addComparison
                        ((ConditionalAnimationComparisons *)this,local_224,0,aCStack_270);
              CVar8 = (Condition)0x1;
            }
            else {
              if (uVar11 != 6) goto LAB_0086e20c;
              ConditionalAnimationComparisons::addComparison
                        ((ConditionalAnimationComparisons *)this,local_224,0,aCStack_268);
              ConditionalAnimationComparisons::addComparison
                        ((ConditionalAnimationComparisons *)this,local_224,3,aCStack_270);
              CVar8 = (Condition)0x0;
            }
            this[0x18] = CVar8;
          }
LAB_0086e20c:
          local_208 = 0xfdbe88;
          local_1f8 = 0xfdbeb0;
          local_188[0] = 0xfdbed8;
          local_1f0[0] = &PTR__basic_stringbuf_00fd8fa0;
          if ((local_1b0 & 1) != 0) {
            operator_delete(local_1a0);
          }
          std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
                    ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_1f0);
          std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
                    ((basic_iostream<char,std::__ndk1::char_traits<char>> *)&local_208);
          std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
                    ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_188);
          if (__src != (float *)0x0) {
            operator_delete(__src);
          }
        }
        else {
                    /* try { // try from 0086e0d4 to 0086e0db has its CatchHandler @ 0086e354 */
          ConditionalAnimationValue::ConditionalAnimationValue
                    ((ConditionalAnimationValue *)&local_208);
          if ((local_240 & 1) != 0) {
            pcVar4 = local_230;
          }
          iVar3 = strcasecmp(pcVar4,"true");
          if (iVar3 == 0) {
                    /* try { // try from 0086e1a4 to 0086e1d3 has its CatchHandler @ 0086e354 */
            ConditionalAnimationValue::setBool((ConditionalAnimationValue *)&local_208,true);
          }
          else {
            iVar3 = strcasecmp(pcVar4,"false");
            if (iVar3 == 0) {
              ConditionalAnimationValue::setBool((ConditionalAnimationValue *)&local_208,false);
            }
            else {
              local_258 = (float *)((ulong)local_258 & 0xffffffff00000000);
                    /* try { // try from 0086e11c to 0086e133 has its CatchHandler @ 0086e2fc */
              StringUtil::atof(pcVar4,(float *)&local_258);
              ConditionalAnimationValue::setFloat
                        ((ConditionalAnimationValue *)&local_208,local_258._0_4_);
            }
          }
          ConditionalAnimationComparisons::addComparison
                    ((ConditionalAnimationComparisons *)this,local_224,uVar11,
                     (ConditionalAnimationValue *)&local_208);
        }
        if ((local_240 & 1) != 0) {
          operator_delete(local_230);
        }
        break;
      }
      if ((local_240 & 1) != 0) {
        operator_delete(local_230);
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != 8);
  }
  if ((local_220 & 1) != 0) {
    operator_delete(local_210);
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


