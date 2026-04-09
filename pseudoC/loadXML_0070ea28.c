// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadXML
// Entry Point: 0070ea28
// Size: 1408 bytes
// Signature: undefined __thiscall loadXML(AnimalSoundSource * this, DomXMLFile * param_1, char * param_2)


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* AnimalSoundSource::loadXML(DomXMLFile&, char const*) */

void __thiscall
AnimalSoundSource::loadXML(AnimalSoundSource *this,DomXMLFile *param_1,char *param_2)

{
  DomXMLFile *__s;
  basic_string *pbVar1;
  long lVar2;
  basic_string *pbVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  size_t __n;
  void *__dest;
  basic_string *pbVar7;
  basic_string *pbVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 local_310;
  size_t local_308;
  void *local_300;
  ulong local_2f8;
  undefined8 uStack_2f0;
  void *local_2e8;
  ulong local_2e0;
  undefined8 uStack_2d8;
  void *local_2d0;
  ulong local_2c8;
  undefined8 uStack_2c0;
  void *local_2b8;
  float local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  basic_string local_290;
  basic_string *local_288;
  basic_string *local_280;
  basic_string *pbStack_278;
  char acStack_270 [256];
  char acStack_170 [256];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  iVar4 = DomXMLFile::getNumChildren(param_1,param_2);
  if (iVar4 != 0) {
    iVar9 = 0;
    do {
      FUN_0070f08c(acStack_170);
      local_2c8 = 0;
      uStack_2c0 = 0;
      local_2b8 = (void *)0x0;
      local_280 = (basic_string *)0x0;
      pbStack_278 = (basic_string *)0x0;
      local_288 = (basic_string *)0x0;
      FUN_0070f08c(acStack_270);
                    /* try { // try from 0070eb08 to 0070ec87 has its CatchHandler @ 0070f048 */
      Properties::getString((Properties *)param_1,acStack_270,"");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&local_2c8);
      FUN_0070f08c(acStack_270);
      local_2b0 = (float)Properties::getFloat((Properties *)param_1,acStack_270,1.0);
      FUN_0070f08c(acStack_270);
      uStack_2ac = Properties::getFloat((Properties *)param_1,acStack_270,local_2b0);
      FUN_0070f08c(acStack_270);
      uStack_2a8 = Properties::getFloat((Properties *)param_1,acStack_270,30.0);
      FUN_0070f08c(acStack_270);
      uStack_2a4 = Properties::getFloat((Properties *)param_1,acStack_270,9.0);
      FUN_0070f08c(acStack_270);
      local_298 = Properties::getFloat((Properties *)param_1,acStack_270,0.0);
      FUN_0070f08c(acStack_270);
      local_294 = Properties::getFloat((Properties *)param_1,acStack_270,0.0);
      FUN_0070f08c(acStack_270);
      local_2a0 = Properties::getFloat((Properties *)param_1,acStack_270,0.0);
      FUN_0070f08c(acStack_270);
      local_29c = Properties::getFloat((Properties *)param_1,acStack_270,0.0);
      FUN_0070f08c(acStack_270);
      local_290 = Properties::getFloat((Properties *)param_1,acStack_270,1.0);
                    /* try { // try from 0070ec90 to 0070ec9b has its CatchHandler @ 0070efbc */
      iVar5 = DomXMLFile::getNumChildren(param_1,acStack_170);
      if (iVar5 != 0) {
        iVar10 = 0;
        do {
          FUN_0070f08c(acStack_270);
                    /* try { // try from 0070ecd0 to 0070ecdf has its CatchHandler @ 0070f078 */
          pcVar6 = (char *)Properties::getString((Properties *)param_1,acStack_270,"");
          local_2e0 = 0;
          uStack_2d8 = 0;
          local_2d0 = (void *)0x0;
          if (*pcVar6 == '$') {
                    /* try { // try from 0070ecfc to 0070ed03 has its CatchHandler @ 0070f060 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((char *)&local_2e0);
          }
          else {
            local_2f8 = 0;
            uStack_2f0 = 0;
            local_2e8 = (void *)0x0;
            __s = param_1 + 0x11;
            if (((byte)param_1[0x10] & 1) != 0) {
              __s = *(DomXMLFile **)(param_1 + 0x20);
            }
            __n = strlen((char *)__s);
            if (0xffffffffffffffef < __n) {
                    /* try { // try from 0070ef94 to 0070ef9b has its CatchHandler @ 0070eff0 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (__n < 0x17) {
              local_310 = CONCAT71(local_310._1_7_,(char)((int)__n << 1));
              __dest = (void *)((ulong)&local_310 | 1);
              if (__n != 0) goto LAB_0070ed94;
            }
            else {
              uVar11 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0070ed68 to 0070ed6f has its CatchHandler @ 0070efc0 */
              __dest = operator_new(uVar11);
              local_310 = uVar11 | 1;
              local_308 = __n;
              local_300 = __dest;
LAB_0070ed94:
              memcpy(__dest,__s,__n);
            }
            *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 0070eda8 to 0070edb7 has its CatchHandler @ 0070eff4 */
            PathUtil::getBasePath((basic_string *)&local_310,(basic_string *)&local_2f8,true);
            if ((local_310 & 1) != 0) {
              operator_delete(local_300);
            }
                    /* try { // try from 0070edc8 to 0070edd7 has its CatchHandler @ 0070f028 */
            PathUtil::buildAbsolutePath
                      ((basic_string *)&local_2f8,pcVar6,(basic_string *)&local_2e0);
            if ((local_2f8 & 1) != 0) {
              operator_delete(local_2e8);
            }
          }
          pbVar1 = local_280;
          if (local_280 == pbStack_278) {
                    /* try { // try from 0070ee0c to 0070ee17 has its CatchHandler @ 0070f060 */
            std::__ndk1::
            vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
            ::
            __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                      ((basic_string *)&local_288);
          }
          else {
                    /* try { // try from 0070edf4 to 0070edff has its CatchHandler @ 0070f04c */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string(local_280);
            local_280 = pbVar1 + 6;
          }
          if ((local_2e0 & 1) != 0) {
            operator_delete(local_2d0);
          }
          iVar10 = iVar10 + 1;
        } while (iVar5 != iVar10);
      }
      pbVar1 = *(basic_string **)(this + 8);
      if (pbVar1 == *(basic_string **)(this + 0x10)) {
                    /* try { // try from 0070eef0 to 0070eef7 has its CatchHandler @ 0070efbc */
        std::__ndk1::
        vector<AnimalSoundSource::Group,std::__ndk1::allocator<AnimalSoundSource::Group>>::
        __push_back_slow_path<AnimalSoundSource::Group_const&>
                  ((vector<AnimalSoundSource::Group,std::__ndk1::allocator<AnimalSoundSource::Group>>
                    *)this,(Group *)&local_2c8);
      }
      else {
                    /* try { // try from 0070ee3c to 0070ee47 has its CatchHandler @ 0070efb4 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar1);
        *(undefined8 *)(pbVar1 + 0x10) = 0;
        *(undefined8 *)(pbVar1 + 0x12) = 0;
        *(undefined8 *)(pbVar1 + 0x14) = 0;
        *(ulong *)(pbVar1 + 0xc) = CONCAT44(local_294,local_298);
        *(ulong *)(pbVar1 + 10) = CONCAT44(local_29c,local_2a0);
        *(ulong *)(pbVar1 + 8) = CONCAT44(uStack_2a4,uStack_2a8);
        *(ulong *)(pbVar1 + 6) = CONCAT44(uStack_2ac,local_2b0);
        pbVar1[0xe] = local_290;
        uVar11 = (long)local_280 - (long)local_288;
        if (uVar11 != 0) {
          if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar11 >> 3) * -0x5555555555555555)) {
                    /* try { // try from 0070ef9c to 0070efa3 has its CatchHandler @ 0070efa8 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
                    /* try { // try from 0070ee9c to 0070ee9f has its CatchHandler @ 0070efac */
          pbVar7 = (basic_string *)operator_new(uVar11);
          pbVar3 = local_280;
          *(basic_string **)(pbVar1 + 0x10) = pbVar7;
          *(basic_string **)(pbVar1 + 0x12) = pbVar7;
          *(basic_string **)(pbVar1 + 0x14) = pbVar7 + ((long)uVar11 >> 3) * 2;
          for (pbVar8 = local_288; pbVar8 != pbVar3; pbVar8 = pbVar8 + 6) {
                    /* try { // try from 0070eec0 to 0070eecb has its CatchHandler @ 0070efc4 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string(pbVar7);
            pbVar7 = pbVar7 + 6;
          }
          *(basic_string **)(pbVar1 + 0x12) = pbVar7;
        }
        *(basic_string **)(this + 8) = pbVar1 + 0x16;
      }
      pbVar1 = local_288;
      pbVar8 = local_280;
      if (local_288 != (basic_string *)0x0) {
        while (pbVar7 = pbVar8, pbVar7 != pbVar1) {
          pbVar8 = pbVar7 + -6;
          if ((*(byte *)pbVar8 & 1) != 0) {
            operator_delete(*(void **)(pbVar7 + -2));
          }
        }
        local_280 = pbVar1;
        operator_delete(local_288);
      }
      if ((local_2c8 & 1) != 0) {
        operator_delete(local_2b8);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


