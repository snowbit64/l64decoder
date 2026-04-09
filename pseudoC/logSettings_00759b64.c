// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: logSettings
// Entry Point: 00759b64
// Size: 1184 bytes
// Signature: undefined logSettings(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HardwareScalability::logSettings() */

void HardwareScalability::logSettings(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  long in_x0;
  Logger *this;
  undefined *puVar5;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00759fc4 to 00759fcb has its CatchHandler @ 0075a014 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 00759fd0 to 00759fd3 has its CatchHandler @ 0075a004 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"Hardware Profile\n");
  if (*(char *)(in_x0 + 0x1c) == '\0') {
    pcVar1 = "forced";
    if (*(char *)(in_x0 + 0x11) != '\0') {
      pcVar1 = "auto";
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"  Level: %s (%s)\n",
                      (&s_performanceClassNames)[*(uint *)(in_x0 + 0x18)],pcVar1);
  }
  else {
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"  Level: Custom %s\n"
                      ,(&s_performanceClassNames)[*(uint *)(in_x0 + 0x18)]);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    (double)*(float *)(in_x0 + 0x28),"  View Distance Factor: %f\n");
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    (double)*(float *)(in_x0 + 0x48),
                    "  Shadow Quality: %f Base-Size: %u Filter-Size: %u\n",
                    (ulong)*(uint *)(in_x0 + 0x54),(ulong)*(uint *)(in_x0 + 0x58));
  pcVar1 = "false";
  if (*(char *)(in_x0 + 0x50) != '\0') {
    pcVar1 = "true";
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "  Shadow Focus Box: %s\n",pcVar1);
  pcVar1 = "false";
  if (*(char *)(in_x0 + 0x3c) != '\0') {
    pcVar1 = "true";
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "  Foliage Shadows: %s\n",pcVar1);
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"  Shader Quality: %u\n"
                    ,(ulong)*(uint *)(in_x0 + 0x60));
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"  Skip Mipmaps: %u\n",
                    (ulong)*(uint *)(in_x0 + 100));
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    (double)*(float *)(in_x0 + 0x2c),"  LOD Distance Factor: %f\n");
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    (double)*(float *)(in_x0 + 0x30),"  Terrain LOD Distance Factor: %f\n");
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "  Terrain Quality: %u\n",(ulong)*(uint *)(in_x0 + 0x78));
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    (double)*(float *)(in_x0 + 0x34),"  Foliage View Distance Factor: %f\n");
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    (double)*(float *)(in_x0 + 0x40),"  Volume Mesh Tessellation Factor: %f\n");
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    (double)*(float *)(in_x0 + 0x44),"  Tyre Tracks Segments Factor: %f\n");
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "  Max. Number of Shadow Lights: %u\n",(ulong)*(uint *)(in_x0 + 0x5c));
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "  Max. Number of Lights: %u\n",(ulong)*(uint *)(in_x0 + 0x9c));
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "  Max. Number of Dir Lights: %u\n",(ulong)*(uint *)(in_x0 + 0xa0));
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "  Max. Number of Lights Per Cluster: %u\n",(ulong)*(uint *)(in_x0 + 0xa4));
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"  MSAA: %u\n",
                    (ulong)*(uint *)(in_x0 + 0x7c));
  if (*(uint *)(in_x0 + 0x80) < 4) {
    puVar5 = (&PTR_DAT_00fdaf38)[(int)*(uint *)(in_x0 + 0x80)];
  }
  else {
    puVar5 = &DAT_0050a39f;
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "  Post Process AA: %s\n",puVar5);
  if (*(uint *)(in_x0 + 0x84) < 6) {
    puVar5 = &DAT_00518510 + *(int *)(&DAT_00518510 + (long)(int)*(uint *)(in_x0 + 0x84) * 4);
  }
  else {
    puVar5 = &DAT_0050a39f;
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"  DLSS Quality: %s\n",
                    puVar5);
  if (*(uint *)(in_x0 + 0x88) < 5) {
    puVar5 = (&PTR_DAT_00fdaf58)[(int)*(uint *)(in_x0 + 0x88)];
  }
  else {
    puVar5 = &DAT_0050a39f;
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "  AMD FidelityFx SR Quality: %s\n",puVar5);
  if (*(uint *)(in_x0 + 0x94) < 5) {
    puVar5 = (&PTR_DAT_00fdaf58)[(int)*(uint *)(in_x0 + 0x94)];
  }
  else {
    puVar5 = &DAT_0050a39f;
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "  Qualcomm SGSR Quality: %s\n",puVar5);
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    (double)*(float *)(in_x0 + 0x98),"  Sharpness: %.2f\n");
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "  Recommended Window Size: %u x %upx\n",(ulong)*(uint *)(in_x0 + 8),
                    (ulong)*(uint *)(in_x0 + 0xc));
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"  Bloom Quality: %u\n",
                    (ulong)*(uint *)(in_x0 + 0xac));
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"  SSAO Quality: %u\n",
                    (ulong)*(uint *)(in_x0 + 0xa8));
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    (double)*(float *)(in_x0 + 0xbc),"  SSAO Resolution Scaling: %f\n");
  pcVar1 = "Enabled";
  pcVar2 = "Disabled";
  pcVar3 = pcVar2;
  if (*(char *)(in_x0 + 0xb0) != '\0') {
    pcVar3 = pcVar1;
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"  DOF: %s\n",pcVar3);
  pcVar3 = pcVar2;
  if (*(char *)(in_x0 + 0xba) != '\0') {
    pcVar3 = pcVar1;
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "  Half Resolution DOF: %s\n",pcVar3);
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"  Cloud Quality: %u\n",
                    (ulong)*(uint *)(in_x0 + 0xb4));
  pcVar3 = pcVar2;
  if (*(char *)(in_x0 + 0xb1) != '\0') {
    pcVar3 = pcVar1;
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "  Texture Streaming: %s\n",pcVar3);
  pcVar3 = pcVar2;
  if (*(char *)(in_x0 + 0xb2) != '\0') {
    pcVar3 = pcVar1;
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "  EnvMap Blending: %s\n",pcVar3);
  if (*(char *)(in_x0 + 0xb3) != '\0') {
    pcVar2 = pcVar1;
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "  Dynamic Specular EnvMap: %s\n",pcVar2);
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "  Shading Rate Quality: %u\n",(ulong)*(uint *)(in_x0 + 0xc0));
  return;
}


