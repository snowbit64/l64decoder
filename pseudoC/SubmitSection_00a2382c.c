// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SubmitSection
// Entry Point: 00a2382c
// Size: 368 bytes
// Signature: undefined __thiscall SubmitSection(SubmitSection * this, SectionType param_1, vector * param_2, uint param_3, bool param_4, bool param_5, RenderTargetData * param_6, PROFILE_SECTION param_7, PROFILE_SECTION param_8, PROFILE_SECTION param_9, char * param_10)


/* RenderQueue::SubmitSection::SubmitSection(RenderQueue::SectionType,
   std::__ndk1::vector<RenderList::ShapeViewInfo, std::__ndk1::allocator<RenderList::ShapeViewInfo>
   > const*, unsigned int, bool, bool, RenderQueue::RenderTargetData&,
   ProfilerManager::PROFILE_SECTION, ProfilerManager::PROFILE_SECTION,
   GpuProfilerManager::PROFILE_SECTION, char const*) */

void __thiscall
RenderQueue::SubmitSection::SubmitSection
          (SubmitSection *this,SectionType param_1,vector *param_2,uint param_3,bool param_4,
          bool param_5,RenderTargetData *param_6,PROFILE_SECTION param_7,PROFILE_SECTION param_8,
          PROFILE_SECTION param_9,char *param_10)

{
  size_t __n;
  SubmitSection *__dest;
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *(SectionType *)this = param_1;
  *(vector **)(this + 8) = param_2;
  *(uint *)(this + 0x10) = param_3;
  this[0x14] = (SubmitSection)param_4;
  this[0x15] = (SubmitSection)param_5;
  uVar2 = *(undefined8 *)param_6;
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_6 + 8);
  *(undefined8 *)(this + 0x18) = uVar2;
  uVar4 = *(undefined8 *)(param_6 + 0x38);
  uVar3 = *(undefined8 *)(param_6 + 0x30);
  uVar2 = *(undefined8 *)(param_6 + 0x40);
  uVar8 = *(undefined8 *)(param_6 + 0x18);
  uVar7 = *(undefined8 *)(param_6 + 0x10);
  uVar6 = *(undefined8 *)(param_6 + 0x28);
  uVar5 = *(undefined8 *)(param_6 + 0x20);
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_6 + 0x48);
  *(undefined8 *)(this + 0x58) = uVar2;
  *(undefined8 *)(this + 0x50) = uVar4;
  *(undefined8 *)(this + 0x48) = uVar3;
  *(undefined8 *)(this + 0x30) = uVar8;
  *(undefined8 *)(this + 0x28) = uVar7;
  *(undefined8 *)(this + 0x40) = uVar6;
  *(undefined8 *)(this + 0x38) = uVar5;
  uVar4 = *(undefined8 *)(param_6 + 0x78);
  uVar3 = *(undefined8 *)(param_6 + 0x70);
  uVar2 = *(undefined8 *)(param_6 + 0x80);
  uVar8 = *(undefined8 *)(param_6 + 0x58);
  uVar7 = *(undefined8 *)(param_6 + 0x50);
  uVar6 = *(undefined8 *)(param_6 + 0x68);
  uVar5 = *(undefined8 *)(param_6 + 0x60);
  *(undefined8 *)(this + 0xa0) = *(undefined8 *)(param_6 + 0x88);
  *(undefined8 *)(this + 0x98) = uVar2;
  *(undefined8 *)(this + 0x90) = uVar4;
  *(undefined8 *)(this + 0x88) = uVar3;
  *(undefined8 *)(this + 0x70) = uVar8;
  *(undefined8 *)(this + 0x68) = uVar7;
  *(undefined8 *)(this + 0x80) = uVar6;
  *(undefined8 *)(this + 0x78) = uVar5;
  uVar4 = *(undefined8 *)(param_6 + 0xb8);
  uVar3 = *(undefined8 *)(param_6 + 0xb0);
  uVar2 = *(undefined8 *)(param_6 + 0xc0);
  uVar8 = *(undefined8 *)(param_6 + 0x98);
  uVar7 = *(undefined8 *)(param_6 + 0x90);
  uVar6 = *(undefined8 *)(param_6 + 0xa8);
  uVar5 = *(undefined8 *)(param_6 + 0xa0);
  *(undefined8 *)(this + 0xe0) = *(undefined8 *)(param_6 + 200);
  *(undefined8 *)(this + 0xd8) = uVar2;
  *(undefined8 *)(this + 0xd0) = uVar4;
  *(undefined8 *)(this + 200) = uVar3;
  *(PROFILE_SECTION *)(this + 0xe8) = param_7;
  *(PROFILE_SECTION *)(this + 0xec) = param_8;
  *(undefined8 *)(this + 0xb0) = uVar8;
  *(undefined8 *)(this + 0xa8) = uVar7;
  *(PROFILE_SECTION *)(this + 0xf0) = param_9;
  *(undefined8 *)(this + 0xc0) = uVar6;
  *(undefined8 *)(this + 0xb8) = uVar5;
  __n = strlen(param_10);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = this + 0xf9;
    this[0xf8] = SUB41((int)__n << 1,0);
    if (__n == 0) goto LAB_00a23920;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (SubmitSection *)operator_new(uVar1);
    *(size_t *)(this + 0x100) = __n;
    *(SubmitSection **)(this + 0x108) = __dest;
    *(ulong *)(this + 0xf8) = uVar1 | 1;
  }
  memcpy(__dest,param_10,__n);
LAB_00a23920:
  __dest[__n] = (SubmitSection)0x0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined ***)(this + 0x110) = &PTR__Task_00fde908;
                    /* try { // try from 00a23940 to 00a2394f has its CatchHandler @ 00a2399c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x120));
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined ***)(this + 0x110) = &PTR__Task_00fe3150;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x29c) = 0;
  *(undefined8 *)(this + 0x294) = 0;
  return;
}


