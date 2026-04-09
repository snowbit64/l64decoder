// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startProceduralPlacementScriptArg
// Entry Point: 0093bd80
// Size: 1228 bytes
// Signature: undefined __cdecl startProceduralPlacementScriptArg(void * param_1, char * param_2, char * * param_3)


/* WARNING: Type propagation algorithm not settling */
/* I3DSceneGraphFactory::startProceduralPlacementScriptArg(void*, char const*, char const**) */

void I3DSceneGraphFactory::startProceduralPlacementScriptArg
               (void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  char *__s;
  char *__s1;
  char *__s_00;
  size_t sVar5;
  basic_string *pbVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  void *pvVar11;
  ushort local_130;
  undefined local_12e;
  void *local_120;
  undefined8 local_118;
  byte *local_110;
  void *local_108;
  undefined8 local_100;
  size_t local_f8;
  void *local_f0;
  undefined8 local_e8;
  size_t local_e0;
  void *local_d8;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __s = (char *)ExpatUtil::getAttr("name",param_3);
  __s1 = (char *)ExpatUtil::getAttr("type",param_3);
  __s_00 = (char *)ExpatUtil::getAttr("value",param_3);
  if (((__s == (char *)0x0) || (__s1 == (char *)0x0)) || (__s_00 == (char *)0x0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 0093c1f0 to 0093c1fb has its CatchHandler @ 0093c24c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Missing I3D attribute \'name\', \'type\' or \'value\' for procedural placement script argument\n"
                     );
    goto LAB_0093c18c;
  }
  sVar5 = strlen(__s_00);
  if (0xffffffffffffffef < sVar5) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar5 < 0x17) {
    pvVar11 = (void *)((ulong)&local_100 | 1);
    local_100 = CONCAT71(local_100._1_7_,(char)((int)sVar5 << 1));
    if (sVar5 != 0) goto LAB_0093be78;
  }
  else {
    uVar10 = sVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar11 = operator_new(uVar10);
    local_100 = uVar10 | 1;
    local_f8 = sVar5;
    local_f0 = pvVar11;
LAB_0093be78:
    memcpy(pvVar11,__s_00,sVar5);
  }
  *(undefined *)((long)pvVar11 + sVar5) = 0;
  iVar3 = strcmp(__s1,"nodes");
  if (iVar3 == 0) {
    local_118 = (byte *)0x0;
    local_110 = (byte *)0x0;
    local_108 = (void *)0x0;
    sVar5 = strlen(__s_00);
    if (0xffffffffffffffef < sVar5) {
                    /* try { // try from 0093c240 to 0093c247 has its CatchHandler @ 0093c290 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar5 < 0x17) {
      pvVar11 = (void *)((ulong)&local_e8 | 1);
      local_e8 = CONCAT71(local_e8._1_7_,(char)((int)sVar5 << 1));
      if (sVar5 != 0) goto LAB_0093befc;
    }
    else {
      uVar10 = sVar5 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0093bee4 to 0093beeb has its CatchHandler @ 0093c290 */
      pvVar11 = operator_new(uVar10);
      local_e8 = uVar10 | 1;
      local_e0 = sVar5;
      local_d8 = pvVar11;
LAB_0093befc:
      memcpy(pvVar11,__s_00,sVar5);
    }
    *(undefined *)((long)pvVar11 + sVar5) = 0;
    local_12e = 0;
    local_130 = 0x3b02;
                    /* try { // try from 0093bf1c to 0093bf33 has its CatchHandler @ 0093c268 */
    StringUtil::split((basic_string *)&local_e8,(basic_string *)&local_130,(vector *)&local_118,true
                      ,true);
    if ((local_130 & 1) != 0) {
      operator_delete(local_120);
    }
    if ((local_e8 & 1) != 0) {
      operator_delete(local_d8);
    }
                    /* try { // try from 0093bf74 to 0093bf83 has its CatchHandler @ 0093c264 */
    if ((1 < (ulong)(((long)local_110 - (long)local_118 >> 3) * -0x5555555555555555)) &&
       (std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)&local_100), (long)local_110 - (long)local_118 != 0x18)) {
      uVar10 = 0;
      do {
        pbVar7 = local_118 + uVar10 * 0x18;
        pbVar9 = *(byte **)(pbVar7 + 0x10);
        if ((*pbVar7 & 1) == 0) {
          pbVar9 = pbVar7 + 1;
        }
        uVar4 = atoi((char *)pbVar9);
        for (lVar8 = *(long *)((long)param_1 + 0x138); lVar8 != 0;
            lVar8 = *(long *)(lVar8 + (ulong)(*(uint *)(lVar8 + 0x20) < uVar4) * 8)) {
        }
        FUN_0093c324(&local_e8);
                    /* try { // try from 0093c00c to 0093c017 has its CatchHandler @ 0093c300 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_100);
        uVar10 = (ulong)((int)uVar10 + 1);
      } while (uVar10 < ((long)local_110 - (long)local_118 >> 3) * -0x5555555555555555 - 1U);
    }
    pbVar9 = local_118;
    pbVar7 = local_110;
    if (local_118 != (byte *)0x0) {
      while (pbVar2 = pbVar7, pbVar2 != pbVar9) {
        pbVar7 = pbVar2 + -0x18;
        if ((*pbVar7 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -8));
        }
      }
      local_110 = pbVar9;
      operator_delete(local_118);
    }
  }
                    /* try { // try from 0093c080 to 0093c083 has its CatchHandler @ 0093c2cc */
  pbVar6 = (basic_string *)ProceduralPlacementManager::getInstance();
  sVar5 = strlen(__s);
  if (0xffffffffffffffef < sVar5) {
                    /* try { // try from 0093c230 to 0093c237 has its CatchHandler @ 0093c2f0 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar5 < 0x17) {
    pvVar11 = (void *)((ulong)&local_e8 | 1);
    local_e8 = CONCAT71(local_e8._1_7_,(char)((int)sVar5 << 1));
    if (sVar5 != 0) goto LAB_0093c0dc;
  }
  else {
    uVar10 = sVar5 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0093c0c4 to 0093c0cb has its CatchHandler @ 0093c2f0 */
    pvVar11 = operator_new(uVar10);
    local_e8 = uVar10 | 1;
    local_e0 = sVar5;
    local_d8 = pvVar11;
LAB_0093c0dc:
    memcpy(pvVar11,__s,sVar5);
  }
  *(undefined *)((long)pvVar11 + sVar5) = 0;
  pbVar9 = (byte *)strlen(__s1);
  if ((byte *)0xffffffffffffffef < pbVar9) {
                    /* try { // try from 0093c238 to 0093c23f has its CatchHandler @ 0093c2d0 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (pbVar9 < (byte *)0x17) {
    pvVar11 = (void *)((ulong)&local_118 | 1);
    local_118 = (byte *)CONCAT71(local_118._1_7_,(char)((int)pbVar9 << 1));
    if (pbVar9 != (byte *)0x0) goto LAB_0093c144;
  }
  else {
                    /* try { // try from 0093c12c to 0093c133 has its CatchHandler @ 0093c2d0 */
    pvVar11 = operator_new((ulong)(pbVar9 + 0x10) & 0xfffffffffffffff0);
    local_118 = (byte *)((ulong)(pbVar9 + 0x10) & 0xfffffffffffffff0 | 1);
    local_110 = pbVar9;
    local_108 = pvVar11;
LAB_0093c144:
    memcpy(pvVar11,__s1,(size_t)pbVar9);
  }
  *(byte *)((long)pvVar11 + (long)pbVar9) = 0;
                    /* try { // try from 0093c158 to 0093c16b has its CatchHandler @ 0093c294 */
  ProceduralPlacementManager::addScriptArgToLastScript
            (pbVar6,(basic_string *)&local_e8,(basic_string *)&local_118);
  if (((ulong)local_118 & 1) != 0) {
    operator_delete(local_108);
  }
  if ((local_e8 & 1) != 0) {
    operator_delete(local_d8);
  }
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
LAB_0093c18c:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


