// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadSoundDesc
// Entry Point: 0074bc5c
// Size: 712 bytes
// Signature: undefined __cdecl loadSoundDesc(SoundDesc * param_1, DomXMLFile * param_2, basic_string * param_3)


/* CollisionEffectManager::loadSoundDesc(CollisionEffectManager::EffectModel::SoundDesc&,
   DomXMLFile&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

uint CollisionEffectManager::loadSoundDesc
               (SoundDesc *param_1,DomXMLFile *param_2,basic_string *param_3)

{
  long lVar1;
  uint uVar2;
  char *pcVar3;
  size_t __n;
  StaticSample *this;
  char *__dest;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 local_88;
  size_t local_80;
  char *local_78;
  byte local_70 [16];
  char *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_006cadd8(local_70,param_3,"#filename");
  pcVar3 = (char *)((ulong)local_70 | 1);
  if ((local_70[0] & 1) != 0) {
    pcVar3 = local_60;
  }
                    /* try { // try from 0074bcbc to 0074bd0f has its CatchHandler @ 0074bf68 */
  pcVar3 = (char *)Properties::getString((Properties *)param_2,pcVar3,"");
  __n = strlen(pcVar3);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0074bf18 to 0074bf1f has its CatchHandler @ 0074bf68 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (char *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_0074bd30;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (char *)operator_new(uVar4);
    local_88 = uVar4 | 1;
    local_80 = __n;
    local_78 = __dest;
  }
  memcpy(__dest,pcVar3,__n);
LAB_0074bd30:
  __dest[__n] = '\0';
                    /* try { // try from 0074bd34 to 0074bd3b has its CatchHandler @ 0074bf50 */
  this = (StaticSample *)operator_new(0x98);
  pcVar3 = *(char **)(param_3 + 4);
  if ((*(byte *)param_3 & 1) == 0) {
    pcVar3 = (char *)((long)param_3 + 1);
  }
                    /* try { // try from 0074bd50 to 0074bd53 has its CatchHandler @ 0074bf40 */
  StaticSample::StaticSample(this,pcVar3);
  *(StaticSample **)param_1 = this;
  pcVar3 = (char *)((ulong)&local_88 | 1);
  if ((local_88 & 1) != 0) {
    pcVar3 = local_78;
  }
                    /* try { // try from 0074bd70 to 0074bd7f has its CatchHandler @ 0074bf50 */
  uVar2 = Sample::load((Sample *)this,pcVar3,true,1);
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if ((uVar2 & 1) != 0) {
    FUN_006cadd8(local_70,param_3,"#minVolume");
    pcVar3 = (char *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pcVar3 = local_60;
    }
                    /* try { // try from 0074bde8 to 0074bdef has its CatchHandler @ 0074bf30 */
    uVar5 = Properties::getFloat((Properties *)param_2,pcVar3,*(float *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = uVar5;
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    FUN_006cadd8(local_70,param_3,"#maxVolume");
    pcVar3 = (char *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pcVar3 = local_60;
    }
                    /* try { // try from 0074be34 to 0074be3b has its CatchHandler @ 0074bf2c */
    uVar5 = Properties::getFloat((Properties *)param_2,pcVar3,*(float *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = uVar5;
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    FUN_006cadd8(local_70,param_3,"#minPitch");
    pcVar3 = (char *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pcVar3 = local_60;
    }
                    /* try { // try from 0074be80 to 0074be87 has its CatchHandler @ 0074bf28 */
    uVar5 = Properties::getFloat((Properties *)param_2,pcVar3,*(float *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = uVar5;
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    FUN_006cadd8(local_70,param_3,"#maxPitch");
    pcVar3 = (char *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pcVar3 = local_60;
    }
                    /* try { // try from 0074becc to 0074bed3 has its CatchHandler @ 0074bf24 */
    uVar5 = Properties::getFloat((Properties *)param_2,pcVar3,*(float *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = uVar5;
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


