// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: registerTexture
// Entry Point: 009667c4
// Size: 616 bytes
// Signature: undefined __thiscall registerTexture(TextureStreamingManager * this, Texture * param_1, char * param_2, ImageStreamingDesc * param_3)


/* TextureStreamingManager::registerTexture(Texture&, char const*, ImageStreamingDesc const&) */

void __thiscall
TextureStreamingManager::registerTexture
          (TextureStreamingManager *this,Texture *param_1,char *param_2,ImageStreamingDesc *param_3)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  size_t __n;
  char *pcVar4;
  void *__dest;
  ulong uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_138;
  size_t local_130;
  void *local_128;
  ulong local_120;
  undefined8 uStack_118;
  char *local_110;
  ulong local_108;
  undefined8 uStack_100;
  void *local_f8;
  float local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong local_88;
  ulong uStack_80;
  ImageStreamingDesc local_78;
  int local_70;
  int iStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (*this == (TextureStreamingManager)0x0) {
    uVar3 = 0;
    goto LAB_009669f0;
  }
  uVar3 = 0;
  if ((((*(ushort *)(param_1 + 0x48) >> 3 & 1) == 0) || (*(int *)(param_1 + 0x50) != 0)) ||
     (*(int *)(param_3 + 0x20) != 1)) goto LAB_009669f0;
  local_108 = 0;
  uStack_100 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  local_90 = 0;
  local_b0 = local_b0 & 0xffffffff00000000;
  local_c8 = 0x100000001;
  local_88 = (local_88 >> 0x10 & 0xffff) << 0x10;
  uStack_80 = uStack_80 & 0xffffffffffff0000;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_78 = (ImageStreamingDesc)0x0;
  local_f8 = (void *)0x0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = (char *)0x0;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00966a20 to 00966a27 has its CatchHandler @ 00966a64 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_138 | 1);
    local_138 = CONCAT71(local_138._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_009668d0;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 009668b8 to 009668bf has its CatchHandler @ 00966a64 */
    __dest = operator_new(uVar5);
    local_138 = uVar5 | 1;
    local_130 = __n;
    local_128 = __dest;
LAB_009668d0:
    memcpy(__dest,param_2,__n);
  }
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 009668e4 to 009668ef has its CatchHandler @ 00966a2c */
  PathUtil::normalizePath((basic_string *)&local_138,(basic_string *)&local_120);
  if ((local_138 & 1) != 0) {
    operator_delete(local_128);
  }
  pcVar1 = (char *)((ulong)&local_120 | 1);
  if ((local_120 & 1) != 0) {
    pcVar1 = local_110;
  }
                    /* try { // try from 00966918 to 0096692b has its CatchHandler @ 00966a68 */
  pcVar4 = (char *)TextureUtil::getSpecificFilename(pcVar1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_108);
  pcVar1 = (char *)((ulong)&local_120 | 1);
  if ((local_120 & 1) != 0) {
    pcVar1 = local_110;
  }
  if ((pcVar4 != (char *)0x0) && (pcVar4 != pcVar1)) {
    operator_delete__(pcVar4);
  }
  fVar6 = (float)NEON_ucvtf(*(undefined4 *)(param_3 + 0x18));
  fVar7 = (float)NEON_ucvtf(*(undefined4 *)(param_3 + 0x1c));
  local_f0 = log2f(fVar6 / fVar7);
  local_78 = param_3[0x70];
  local_b0 = *(ulong *)(param_3 + 0x38);
  uStack_b8 = *(undefined8 *)(param_3 + 0x30);
  uStack_a0 = *(undefined8 *)(param_3 + 0x48);
  local_a8 = *(undefined8 *)(param_3 + 0x40);
  local_90 = *(undefined8 *)(param_3 + 0x58);
  uStack_98 = *(undefined8 *)(param_3 + 0x50);
  uStack_80 = *(ulong *)(param_3 + 0x68);
  local_88 = *(ulong *)(param_3 + 0x60);
  uStack_e0 = *(undefined8 *)(param_3 + 8);
  local_e8 = *(undefined8 *)param_3;
  local_d0 = *(undefined8 *)(param_3 + 0x18);
  local_d8 = *(undefined8 *)(param_3 + 0x10);
  iStack_6c = *(int *)(param_3 + 0xc);
  uStack_c0 = *(undefined8 *)(param_3 + 0x28);
  local_c8 = *(undefined8 *)(param_3 + 0x20);
  local_70 = *(int *)(param_3 + 0x28) - iStack_6c;
                    /* try { // try from 009669ac to 009669cb has its CatchHandler @ 00966a68 */
  RegistryPipeline::addTexture_main
            ((RegistryPipeline *)(this + 0x2d0),param_1,(StreamingDesc *)&local_108);
  *(long *)(this + 0x830) = *(long *)(this + 0x830) + 1;
  Semaphore::post();
  if ((local_120 & 1) != 0) {
    operator_delete(local_110);
  }
  if ((local_108 & 1) != 0) {
    operator_delete(local_f8);
  }
  uVar3 = 1;
LAB_009669f0:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


