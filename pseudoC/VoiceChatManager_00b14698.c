// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VoiceChatManager
// Entry Point: 00b14698
// Size: 452 bytes
// Signature: undefined __thiscall VoiceChatManager(VoiceChatManager * this)


/* VoiceChatManager::VoiceChatManager() */

void __thiscall VoiceChatManager::VoiceChatManager(VoiceChatManager *this)

{
  void **ppvVar1;
  long *plVar2;
  bool bVar3;
  void **ppvVar4;
  void *pvVar5;
  long lVar6;
  uint uVar7;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x18) = 1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined2 *)(this + 0x2f) = 0;
  *(undefined2 *)(this + 0x2c) = 0x101;
  *(undefined8 *)(this + 0x24) = 0xbf800000;
  *(undefined8 *)(this + 0x1c) = 0x3f8000003f800000;
  this[0x31] = (VoiceChatManager)0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(VoiceChatManager **)(this + 0x38) = this + 0x40;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x424) = 0;
  *(undefined4 *)(this + 0x60) = 0xffffffff;
  *(undefined2 *)(this + 0x428) = 0;
                    /* try { // try from 00b1470c to 00b1471b has its CatchHandler @ 00b1486c */
  Event::Event((Event *)(this + 0x42c),false,false);
                    /* try { // try from 00b14720 to 00b14727 has its CatchHandler @ 00b14864 */
  Thread::Thread((Thread *)(this + 0x488));
  ppvVar1 = (void **)(this + 0x1478);
  plVar2 = (long *)(this + 0x1488);
  *(undefined8 *)(this + 0x4d0) = 0;
  *(void ***)(this + 0x1478) = ppvVar1;
  *(void ***)(this + 0x1480) = ppvVar1;
  *(undefined8 *)(this + 0x14a0) = 0;
  *(undefined8 *)(this + 0x1498) = 0;
  *(undefined8 *)(this + 0x1490) = 0;
  *plVar2 = 0;
                    /* try { // try from 00b1475c to 00b14767 has its CatchHandler @ 00b1485c */
  Mutex::Mutex((Mutex *)(this + 0x14a8),true);
  *(undefined8 *)(this + 0x1528) = 0;
  *(undefined8 *)(this + 0x1520) = 0;
  *(undefined8 *)(this + 0x1518) = 0;
  *(undefined8 *)(this + 0x1510) = 0;
  *(undefined8 *)(this + 0x1508) = 0;
  *(undefined8 *)(this + 0x1500) = 0;
  *(undefined8 *)(this + 0x14f8) = 0;
  *(undefined8 *)(this + 0x14f0) = 0;
  *(undefined8 *)(this + 0x14e8) = 0;
  *(undefined8 *)(this + 0x14e0) = 0;
  *(undefined8 *)(this + 0x14d8) = 0;
  *(undefined8 *)(this + 0x14d0) = 0;
  *(undefined8 *)(this + 0x1530) = 0x3fe0000000000000;
                    /* try { // try from 00b14794 to 00b147af has its CatchHandler @ 00b14874 */
  VoiceActivityDetector::VoiceActivityDetector((VoiceActivityDetector *)(this + 0x1538));
  VoiceAutoLevelDetector::VoiceAutoLevelDetector
            ((VoiceAutoLevelDetector *)(this + 0x160c),-20.0,0.5,3.0);
  *(undefined8 *)(this + 0x164c) = 0x32;
  uVar7 = 1;
  do {
                    /* try { // try from 00b147c4 to 00b147cb has its CatchHandler @ 00b14878 */
    ppvVar4 = (void **)operator_new(0x18);
    lVar6 = *plVar2;
    pvVar5 = *ppvVar1;
    *(char *)(ppvVar4 + 2) = (char)uVar7;
    bVar3 = uVar7 < 0x1e;
    *ppvVar1 = ppvVar4;
    *ppvVar4 = pvVar5;
    ppvVar4[1] = ppvVar1;
    *(void ***)((long)pvVar5 + 8) = ppvVar4;
    *plVar2 = lVar6 + 1;
    uVar7 = uVar7 + 1;
  } while (bVar3);
  memset(this + 100,0,0x3c0);
  memset(this + 0x4d8,0,4000);
                    /* try { // try from 00b1481c to 00b14843 has its CatchHandler @ 00b14874 */
  Thread::start((Thread *)(this + 0x488),backgroundWorkerThreadFunc,this,0xffffffff,
                "GIANTS Audio Encoding Thread",2,0x100000);
  return;
}


