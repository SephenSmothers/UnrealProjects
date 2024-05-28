#include "Both_BP_Code/ButtonWithText.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"


void UButtonWithText::NativePreConstruct()
{
	Information->SetText(ButtonText); 
}

void UButtonWithText::NativeConstruct()
{
	BackgroundButton->OnClicked.AddDynamic(this, &UButtonWithText::OnButtonsClicked);
}

void UButtonWithText::OnButtonsClicked()
{
	OnButtonCLicked.Broadcast();

}
