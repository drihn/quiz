package jaaswing;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.JOptionPane;

public class tutionfeecomputation extends JFrame implements ActionListener {

    private JLabel idLabel, nameLabel, courseLabel, discountLabel;
    private JTextField idTextField, nameTextField;
    private JComboBox<String> courseComboBox;
    private JRadioButton goldButton, blueButton, whiteButton,  continuingButton, walkinButton;
    private JButton enrollButton;

    public tutionfeecomputation() {
        // Set up the JFrame
        setTitle("Enrollment System");
        setSize(407, 426);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Create the components
        idLabel = new JLabel("ID Number:");
        idLabel.setBounds(20, 36, 143, 58);
        nameLabel = new JLabel("Name:");
        nameLabel.setBounds(42, 87, 66, 42);
        courseLabel = new JLabel("Course Name:");
        courseLabel.setBounds(10, 129, 164, 30);
        discountLabel = new JLabel("Discount:");
        discountLabel.setBounds(35, 176, 115, 42);

        idTextField = new JTextField();
        idTextField.setBounds(87, 98, 219, 20);
        nameTextField = new JTextField();
        nameTextField.setBounds(87, 55, 219, 20);

        courseComboBox = new JComboBox<String>();
        courseComboBox.setBounds(97, 129, 219, 30);
        courseComboBox.addItem("Nursing (₱30,000)");
        courseComboBox.addItem("Engineer (₱55,000)");
        courseComboBox.addItem("Computer Science (₱31,000)");
        courseComboBox.addItem("Tourism (₱32,500)");
        courseComboBox.addItem("Architecture (₱48,000)");

        goldButton = new JRadioButton("Gold (0.50%)");
        goldButton.setBounds(104, 188, 125, 30);
        blueButton = new JRadioButton("Blue (0.70%)");
        blueButton.setBounds(104, 219, 125, 30);
        whiteButton = new JRadioButton("White (0.90%)");
        whiteButton.setBounds(104, 253, 219, 30);
     

        ButtonGroup discountGroup = new ButtonGroup();
        discountGroup.add(goldButton);
        discountGroup.add(blueButton);
        discountGroup.add(whiteButton);
        discountGroup.add(continuingButton);
        discountGroup.add(walkinButton);
        
        enrollButton = new JButton("Enroll");
        enrollButton.setBounds(232, 304, 125, 65);
        enrollButton.addActionListener(this);
        getContentPane().setLayout(null);

        // Add the components to the JFrame
        getContentPane().add(idLabel);
        getContentPane().add(idTextField);
        getContentPane().add(nameLabel);
        getContentPane().add(nameTextField);
        getContentPane().add(courseLabel);
        getContentPane().add(courseComboBox);
        getContentPane().add(discountLabel);
        getContentPane().add(goldButton);
        JLabel label = new JLabel("");
        label.setBounds(438, 182, 219, 91);
        getContentPane().add(label);
        getContentPane().add(blueButton);
        getContentPane().add(whiteButton);
        getContentPane().add(enrollButton);
        
        JRadioButton walkinButton = new JRadioButton("Walk In");
        walkinButton.setBounds(231, 195, 73, 23);
        getContentPane().add(walkinButton);
        
        JRadioButton continuingButton = new JRadioButton("Continuing (0.50%)");
        continuingButton.setBounds(231, 223, 122, 23);
        getContentPane().add(continuingButton);
        
        JLabel lblNewLabel = new JLabel("Enrollment Form");
        lblNewLabel.setFont(new Font("Tahoma", Font.BOLD, 17));
        lblNewLabel.setBounds(118, 11, 188, 14);
        getContentPane().add(lblNewLabel);

        // Show the JFrame
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        // Get the values entered by the user
        int idNumber = Integer.parseInt(idTextField.getText());
        String name = nameTextField.getText();
        String courseName = (String) courseComboBox.getSelectedItem();
        int totaltuition;
         
        double tuition = 0;
        double miscellaneous = 0;
        int totalTuition = 0;

        if (courseName.equals("Nursing (₱30,000)")) {
            tuition = 15000;
            miscellaneous = 15000;
        } else if (courseName.equals("Engineer (₱55,500)")) {
            tuition = 30000;
            miscellaneous = 25000;
        } else if (courseName.equals("Computer Science (₱31,000)")) {
            tuition = 20000;
            miscellaneous = 11000;
        } else if (courseName.equals("Architecture (₱53,000)")) {
            tuition = 25000;
            miscellaneous = 23000;
        }
        else if (courseName.equals("Tourism (₱32,500)")) {
            tuition = 10000.0;
            miscellaneous = 22500;
        }

        double discount = 0;
        String disc = " ";

        if (goldButton.isSelected()) {
        	disc = "(50% discount for tuition fee and miscellaneous)";
        	totalTuition = (int) ((tuition + miscellaneous) * 0.5);
        } else if (blueButton.isSelected()) {
        	disc = "(30% discount for tuition fee and miscellaneous)";
        	totalTuition = (int) ((tuition + miscellaneous) * 0.7);
        } else if (whiteButton.isSelected()) {
        	disc = "(10% discount for tuition fee and miscellaneous)";
        	totalTuition = (int) ((tuition + miscellaneous) * 0.9);
        }
        else if (continuingButton.isSelected()) {
        	disc = "(10% discount for tuition fee only)";
        	totalTuition = (int) ((0.9 * tuition) + miscellaneous);
        }
         

    
        // Display the enrollment information
        JOptionPane.showMessageDialog(this, "Enrollment Information:\n\n" +
                "ID Number: " + idNumber + "\n" +
                "Name: " + name + "\n" +
                "Course Name: " + courseName + "\n" +
                "Discount: " + disc + "\n" +
                "Tuition: $" + tuition + "\n" +
                "miscellaneous: $" + miscellaneous + "\n" +
                "TotalTuition : $" + totalTuition);
    }

    public static void main(String[] args) {
    	tutionfeecomputation enrollmentSystem = new tutionfeecomputation();
    }
}
