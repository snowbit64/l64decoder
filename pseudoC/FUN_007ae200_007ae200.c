// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ae200
// Entry Point: 007ae200
// Size: 372 bytes
// Signature: undefined FUN_007ae200(void)


undefined8 * FUN_007ae200(char **param_1)

{
  long lVar1;
  size_t __n;
  Resource *pRVar2;
  undefined8 *this;
  ResourceManager *this_00;
  char *pcVar3;
  char *__dest;
  ulong uVar4;
  undefined8 local_60;
  size_t local_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pcVar3 = *param_1;
  __n = strlen(pcVar3);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (char *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_007ae28c;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (char *)operator_new(uVar4);
    local_60 = uVar4 | 1;
    local_58 = __n;
    local_50 = __dest;
  }
  memcpy(__dest,pcVar3,__n);
LAB_007ae28c:
  __dest[__n] = '\0';
                    /* try { // try from 007ae290 to 007ae29b has its CatchHandler @ 007ae388 */
  PathUtil::makeUnifiedPathInPlace((basic_string *)&local_60);
  pcVar3 = (char *)((ulong)&local_60 | 1);
  if ((local_60 & 1) != 0) {
    pcVar3 = local_50;
  }
                    /* try { // try from 007ae2b0 to 007ae2b7 has its CatchHandler @ 007ae384 */
  pRVar2 = (Resource *)TextureUtil::loadDefaultImageOverlayTexture(pcVar3,true);
  if (pRVar2 == (Resource *)0x0) {
    this = (undefined8 *)0x0;
  }
  else {
                    /* try { // try from 007ae2c0 to 007ae2c7 has its CatchHandler @ 007ae38c */
    this = (undefined8 *)operator_new(0x28);
    pcVar3 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar3 = local_50;
    }
                    /* try { // try from 007ae2dc to 007ae2e3 has its CatchHandler @ 007ae374 */
    Entity::Entity((Entity *)this,pcVar3,true);
    this[4] = pRVar2;
    *this = &PTR__TextureEntity_00fdb6b8;
    this[2] = this[2] | 0x100000000000;
    FUN_00f276d0(1,pRVar2 + 8);
                    /* try { // try from 007ae310 to 007ae31b has its CatchHandler @ 007ae38c */
    this_00 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::release(this_00,pRVar2);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


