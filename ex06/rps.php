<?php
$input = readline("Choose rock, paper, or scissors: ");
$first = "rock";
$second = "paper";
$third = "scissors";
$array = array('rock', 'paper', 'scissors');
$computer = $array[array_rand($array)];

if ($input == "scissors")
{
    if ($computer == "rock")
        echo "Sorry, you lost. The computer chose $computer.\n";
    elseif($computer == "paper")
        echo "Congratulations! You won! The computer chose $computer.\n";
    elseif($computer == "scissors")
        echo "It's a tie.\n";
}
elseif ($input == "paper")
{
    if ($computer == "rock")
        echo "Congratulations! You won! The computer chose $computer.\n";
    elseif($computer == "paper")
        echo "It's a tie.\n";
    elseif($computer == "scissors")
        echo "Sorry, you lost. The computer chose $computer.\n";
}
elseif ($input == "rock")
{
    if ($computer == "rock")
        echo "It's a tie.\n";
    elseif($computer == "paper")
        echo "Congratulations! You won! The computer chose $computer.\n";
    elseif($computer == "scissors")
        echo "Sorry, you lost. The computer chose $computer.\n";
}
else
    echo "Invalide input\n";
?>