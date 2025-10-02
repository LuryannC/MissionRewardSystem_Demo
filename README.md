## **Mission-Reward System**
Get it from: [Fab](https://fab.com/s/575178f87ecb).

The Mission-Reward System plugin provides a flexible and designer-friendly way to create and manage missions in Unreal Engine 5.

Missions are driven by **FGameplayTags**, making it easy to define conditions that can be reused across multiple missions. Developers can report gameplay events through the **MissionRewardSubsystem** by calling **ReportGameplayEvent**, passing in a tag and a progress value. Any missions listening to that tag will automatically update their progress.

Missions can be preloaded from assets defined in settings or dynamically granted during gameplay.

## Each mission supports:
* MissionID.
* Title (with localization support).
* Description (with localization support).
* Icon.
* Multiple conditions
* Multiple rewards.

Rewards:
* RewardBase class with an overridable GrantReward function for extending reward logic.

The system includes built-in saving support with options for local or custom logic, as well as a plugin configuration page in Project Settings.
