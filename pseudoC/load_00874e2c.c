// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: load
// Entry Point: 00874e2c
// Size: 712 bytes
// Signature: undefined __cdecl load(char * param_1, char * param_2)


/* AnimalCompanionManager::load(char const*, char const*) */

bool AnimalCompanionManager::load(char *param_1,char *param_2)

{
  char cVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  size_t __n;
  char *pcVar5;
  UpdateManager *this;
  long lVar6;
  void *__dest;
  undefined4 uVar7;
  ulong local_248;
  undefined8 uStack_240;
  void *local_238;
  char acStack_230 [128];
  undefined8 local_1b0;
  size_t local_1a8;
  void *local_1a0;
  DomXMLFile aDStack_130 [216];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  DomXMLFile::DomXMLFile(aDStack_130);
                    /* try { // try from 00874e68 to 00874edf has its CatchHandler @ 00875128 */
  uVar4 = DomXMLFile::loadFromFile(aDStack_130,param_2,true);
  if ((uVar4 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 008750b8 to 008750c3 has its CatchHandler @ 008750f4 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Can\'t load animal companion XML file \'%s\'.\n",param_2);
    goto LAB_0087505c;
  }
  local_248 = 0;
  uStack_240 = 0;
  local_238 = (void *)0x0;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 008750a0 to 008750a7 has its CatchHandler @ 00875124 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_1b0 | 1);
    local_1b0 = CONCAT71(local_1b0._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00874f04;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00874eec to 00874ef3 has its CatchHandler @ 00875124 */
    __dest = operator_new(uVar4);
    local_1b0 = uVar4 | 1;
    local_1a8 = __n;
    local_1a0 = __dest;
LAB_00874f04:
    memcpy(__dest,param_2,__n);
  }
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 00874f18 to 00874f27 has its CatchHandler @ 0087510c */
  PathUtil::getBasePath((basic_string *)&local_1b0,(basic_string *)&local_248,true);
  if ((local_1b0 & 1) != 0) {
    operator_delete(local_1a0);
  }
  FUN_00875158(&local_1b0);
  FUN_00875158(acStack_230);
                    /* try { // try from 00874f60 to 00874f6f has its CatchHandler @ 00875108 */
  uVar7 = Properties::getFloat((Properties *)aDStack_130,acStack_230,1.0);
  *(undefined4 *)(param_1 + 0x220) = uVar7;
  FUN_00875158(acStack_230);
                    /* try { // try from 00874f88 to 00875017 has its CatchHandler @ 00875130 */
  pcVar5 = (char *)DomXMLFile::getValue(aDStack_130,acStack_230,false);
  if (pcVar5 != (char *)0x0) {
    if (*pcVar5 == '$') {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(param_1 + 400);
    }
    else {
      PathUtil::buildAbsolutePath((basic_string *)&local_248,pcVar5,(basic_string *)(param_1 + 400))
      ;
    }
    I3DAssetPtr::loadSharedI3DAsync
              ((I3DAssetPtr *)(param_1 + 0x40),pcVar5,false,false,(MeshSplitFileState *)0x0,true,
               true,(Loader *)(param_1 + 0x30));
    loadXMLFile((AnimalCompanionManager *)param_1,aDStack_130,(char *)&local_1b0);
    param_1[0x18a] = '\x01';
    this = (UpdateManager *)UpdateManager::getInstance();
    UpdateManager::addUpdateable(this,(Updateable *)(param_1 + 0x20),false);
    if (*(int *)(param_1 + 0x18c) != 0) {
      lVar6 = 0;
      uVar4 = 0;
      do {
                    /* try { // try from 00875030 to 00875037 has its CatchHandler @ 00875134 */
        AnimalAnimationSystem::useCustomSubblend
                  ((AnimalAnimationSystem *)(*(long *)(param_1 + 0x128) + lVar6),true);
        uVar4 = uVar4 + 1;
        lVar6 = lVar6 + 0x338;
      } while (uVar4 < *(uint *)(param_1 + 0x18c));
    }
  }
  if ((local_248 & 1) != 0) {
    operator_delete(local_238);
  }
LAB_0087505c:
  cVar1 = param_1[0x18a];
  DomXMLFile::~DomXMLFile(aDStack_130);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return cVar1 != '\0';
}


