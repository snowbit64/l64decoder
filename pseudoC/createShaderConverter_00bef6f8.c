// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createShaderConverter
// Entry Point: 00bef6f8
// Size: 832 bytes
// Signature: undefined __cdecl createShaderConverter(ShaderCapabilities * param_1, char * param_2, char * param_3)


/* ShaderManager::createShaderConverter(ShaderCapabilities const*, char const*, char const*) */

ShaderConverter *
ShaderManager::createShaderConverter(ShaderCapabilities *param_1,char *param_2,char *param_3)

{
  ShaderCapabilities *__s;
  uint uVar1;
  long lVar2;
  int iVar3;
  size_t sVar4;
  ShaderConverter *this;
  char *__dest;
  ulong uVar5;
  undefined uVar6;
  char *pcVar7;
  uint local_8c;
  ulong local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  size_t local_68;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __s = param_1 + 0x19;
  if (((byte)param_1[0x18] & 1) != 0) {
    __s = *(ShaderCapabilities **)(param_1 + 0x28);
  }
  sVar4 = strlen((char *)__s);
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    pcVar7 = (char *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_00bef794;
  }
  else {
    uVar5 = sVar4 + 0x10 & 0xfffffffffffffff0;
    pcVar7 = (char *)operator_new(uVar5);
    local_70 = uVar5 | 1;
    local_68 = sVar4;
    local_60 = pcVar7;
LAB_00bef794:
    memcpy(pcVar7,__s,sVar4);
  }
  pcVar7[sVar4] = '\0';
                    /* try { // try from 00bef7a8 to 00bef7b7 has its CatchHandler @ 00befa78 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_70);
                    /* try { // try from 00bef7b8 to 00bef7bf has its CatchHandler @ 00befa74 */
  this = (ShaderConverter *)operator_new(0xe28);
  uVar6 = 0x28;
  memset(this,0,0xe28);
                    /* try { // try from 00bef7d4 to 00bef7df has its CatchHandler @ 00befa64 */
  IR_TypeSet::IR_TypeSet((IR_TypeSet *)(this + 0x10),(IR_TypeSet *)0x0);
  uVar1 = *(uint *)param_1;
  *(undefined8 *)(this + 0xe20) = 0;
  *(undefined8 *)(this + 0xe18) = 0;
  *(undefined8 *)(this + 0xe10) = 0;
  *(undefined8 *)(this + 0xe08) = 0;
  *(undefined8 *)(this + 0xe00) = 0;
  *(undefined8 *)(this + 0xdf8) = 0;
  *(undefined8 *)(this + 0xdf0) = 0;
  *(undefined8 *)(this + 0xde8) = 0;
  *(undefined8 *)(this + 0xde0) = 0;
  if ((uVar1 < 7) && ((1 << (ulong)(uVar1 & 0x1f) & 0x46U) != 0)) {
    pcVar7 = "stdlib.hlsl.cg";
  }
  else if (uVar1 - 3 < 2) {
    pcVar7 = "stdlib.pssl.cg";
  }
  else if (uVar1 == 6) {
    pcVar7 = "stdlib.vulkan.cg";
  }
  else {
    if (uVar1 != 5) goto LAB_00bef92c;
    pcVar7 = "stdlib.metal.cg";
  }
                    /* try { // try from 00bef820 to 00bef82f has its CatchHandler @ 00befa60 */
  Preprocessor::formatIncludeDirective((Preprocessor *)pcVar7,(char *)0x0,(bool)uVar6);
  pcVar7 = (char *)((ulong)&local_88 | 1);
  if ((local_88 & 1) != 0) {
    pcVar7 = local_78;
  }
                    /* try { // try from 00bef84c to 00bef853 has its CatchHandler @ 00befa50 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_70,(ulong)pcVar7);
  if (((byte)local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  uVar5 = local_70;
  sVar4 = local_70 >> 1 & 0x7f;
  if ((local_70 & 1) != 0) {
    sVar4 = local_68;
  }
                    /* try { // try from 00bef87c to 00bef87f has its CatchHandler @ 00befa4c */
  __dest = (char *)operator_new__(sVar4 + 1);
  pcVar7 = (char *)((ulong)&local_70 | 1);
  if ((uVar5 & 1) != 0) {
    pcVar7 = local_60;
  }
  pcVar7 = strcpy(__dest,pcVar7);
                    /* try { // try from 00bef89c to 00bef8bf has its CatchHandler @ 00befa94 */
  local_8c = __strlen_chk(pcVar7,0xffffffffffffffff);
  StringUtil::remove('\r',local_8c,__dest,&local_8c,__dest);
  local_88 = 0;
  local_80 = 0;
  local_78 = (char *)0x0;
                    /* try { // try from 00bef8cc to 00bef98f has its CatchHandler @ 00befa7c */
  uVar5 = preprocessShaderString(local_8c,__dest,(basic_string *)&local_88,false);
  if ((uVar5 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00bef9fc to 00befa07 has its CatchHandler @ 00befa38 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Failed to preprocess the GISL standard library\n");
    operator_delete__(__dest);
  }
  else {
    operator_delete__(__dest);
    pcVar7 = (char *)((ulong)&local_88 | 1);
    if ((local_88 & 1) != 0) {
      pcVar7 = local_78;
    }
    ShaderConverter::initialize(this,pcVar7,param_2,param_3);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((uVar5 & 1) == 0) {
    this = (ShaderConverter *)0x0;
  }
LAB_00bef92c:
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}


