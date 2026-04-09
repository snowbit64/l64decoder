// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initialize
// Entry Point: 00aac938
// Size: 340 bytes
// Signature: undefined initialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanLoaderUtil::initialize() */

bool VulkanLoaderUtil::initialize(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  Logger *this;
  
  lVar2 = dlopen("libvulkan.so",2);
  if (lVar2 == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00aaca4c to 00aaca53 has its CatchHandler @ 00aaca9c */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 00aaca58 to 00aaca5b has its CatchHandler @ 00aaca8c */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar3 = dlerror();
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Could not load vulkan library : %s!\n",uVar3);
  }
  else {
    vkGetInstanceProcAddr = (code *)dlsym(lVar2,"vkGetInstanceProcAddr");
    vkEnumerateInstanceExtensionProperties =
         (*vkGetInstanceProcAddr)(0,"vkEnumerateInstanceExtensionProperties");
    vkEnumerateInstanceLayerProperties =
         (*vkGetInstanceProcAddr)(0,"vkEnumerateInstanceLayerProperties");
    vkEnumerateInstanceVersion = (*vkGetInstanceProcAddr)(0,"vkEnumerateInstanceVersion");
    vkCreateInstance = (*vkGetInstanceProcAddr)(0,"vkCreateInstance");
  }
  return lVar2 != 0;
}


