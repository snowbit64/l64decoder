// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConditionalAnimationItem
// Entry Point: 00865ebc
// Size: 232 bytes
// Signature: undefined __thiscall ConditionalAnimationItem(ConditionalAnimationItem * this, ConditionalAnimationItem * param_1)


/* ConditionalAnimationItem::ConditionalAnimationItem(ConditionalAnimationItem const&) */

void __thiscall
ConditionalAnimationItem::ConditionalAnimationItem
          (ConditionalAnimationItem *this,ConditionalAnimationItem *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 5) = *(undefined8 *)(param_1 + 5);
  *(undefined8 *)this = uVar2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  uVar2 = *(undefined8 *)(param_1 + 0x34);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x3c) = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)(this + 0x34) = uVar2;
  *(undefined8 *)(this + 0x30) = uVar4;
  *(undefined8 *)(this + 0x28) = uVar3;
                    /* try { // try from 00865f10 to 00865f17 has its CatchHandler @ 00866004 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x48));
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(this + 0x65) = *(undefined8 *)(param_1 + 0x65);
  *(undefined8 *)(this + 0x60) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x78) = uVar1;
                    /* try { // try from 00865f44 to 00865f47 has its CatchHandler @ 00865fd4 */
  std::__ndk1::
  vector<ConditionalAnimationBlending::Node,std::__ndk1::allocator<ConditionalAnimationBlending::Node>>
  ::vector((vector<ConditionalAnimationBlending::Node,std::__ndk1::allocator<ConditionalAnimationBlending::Node>>
            *)(this + 0x80),(vector *)(param_1 + 0x80));
                    /* try { // try from 00865f50 to 00865f57 has its CatchHandler @ 00865fc4 */
  std::__ndk1::
  vector<ConditionalAnimationConditions::Group,std::__ndk1::allocator<ConditionalAnimationConditions::Group>>
  ::vector((vector<ConditionalAnimationConditions::Group,std::__ndk1::allocator<ConditionalAnimationConditions::Group>>
            *)(this + 0x98),(vector *)(param_1 + 0x98));
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(this + 0xb5) = *(undefined8 *)(param_1 + 0xb5);
  *(undefined8 *)(this + 0xb0) = uVar2;
                    /* try { // try from 00865f70 to 00865f77 has its CatchHandler @ 00865fb4 */
  std::__ndk1::
  vector<ConditionalAnimationItem::LoadedCallbackInfo,std::__ndk1::allocator<ConditionalAnimationItem::LoadedCallbackInfo>>
  ::vector((vector<ConditionalAnimationItem::LoadedCallbackInfo,std::__ndk1::allocator<ConditionalAnimationItem::LoadedCallbackInfo>>
            *)(this + 0xc0),(vector *)(param_1 + 0xc0));
                    /* try { // try from 00865f80 to 00865f83 has its CatchHandler @ 00865fa4 */
  std::__ndk1::
  vector<ConditionalAnimationItem::RunningCallbackInfo,std::__ndk1::allocator<ConditionalAnimationItem::RunningCallbackInfo>>
  ::vector((vector<ConditionalAnimationItem::RunningCallbackInfo,std::__ndk1::allocator<ConditionalAnimationItem::RunningCallbackInfo>>
            *)(this + 0xd8),(vector *)(param_1 + 0xd8));
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  return;
}


